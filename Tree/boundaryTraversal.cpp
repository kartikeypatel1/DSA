#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* left;
    Node* right;
    Node(int value){
        this->value=value;
        this->left=nullptr;
        this->right=nullptr;
    }
};

void leftTraversal(Node* root,vector<int>& result){
    if(root==nullptr){
        return;
    }
    if(root->left==nullptr&& root->right==nullptr){
        return;
    }
            result.push_back(root->value);

    if(root->left){
        leftTraversal(root->left,result);
    }else{
        leftTraversal(root->right,result);
    }
}

void leafTraversal(Node* root,vector<int>& result){
    if(root==nullptr){
        return;
    }
    if(root->left==nullptr&&root->right==nullptr){
        result.push_back(root->value);
        return;
    }
    leafTraversal(root->left,result);
    leafTraversal(root->right,result);
}
void rightTraversal(Node* root,vector<int>& result){
    if(root==nullptr){
        return;
    }
    if(root->left==nullptr&&root->right==nullptr){
        return ;
    }
    if(root->right){
        rightTraversal(root->right,result);
    }else{
        rightTraversal(root->left,result);
    }
    result.push_back(root->value);
}
int main(){
    Node* root=new Node(3);
    if(root==nullptr){
        return 0;
    }
    vector<int> result;
    result.push_back(root->value);
    leftTraversal(root->left,result);
    leafTraversal(root->left,result);
    leafTraversal(root->right,result);
    rightTraversal(root->right,result);
}