#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value){
        this->data=value;
        this->left=nullptr;
        this->right=nullptr;
    }
};
Node* LCA(Node* root,int n1,int n2){
    if(root==nullptr){
        return nullptr;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    Node* left=LCA(root->left,n1,n2);
    Node* right=LCA(root->right,n1,n2);
    if(left!=nullptr && right!=nullptr){
        return root;
    }
    if(left==nullptr && right==nullptr){
        return nullptr;
    }
    if(left!=nullptr){
        return left;
    }
    else{
        return right;
    }
}
int main(){
    
    return 0;
}