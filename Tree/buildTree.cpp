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
Node* buildTree(Node* root){
    cout<<"Enter the value of the node: ";
    int value;
    cin>>value;
    root=new Node(value);
    if(value==-1){
        return nullptr;
    }
    cout<<"Enter the value of the left child of "<<value<<": ";
    root->left=buildTree(root->left);
    cout<<"Enter the value of the right child of "<<value<<": ";
    root->right=buildTree(root->right);
    return root;
}
void inOrderTraversal(Node* root){
    if(root==nullptr){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->value<<" ";
    inOrderTraversal(root->right);
}

int main(){
    Node* root=buildTree(root   );
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    inOrderTraversal(root);
    return 0;
}