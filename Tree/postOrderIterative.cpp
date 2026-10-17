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

vector<int> postOrderTraversal(Node* root){
    vector<int>postOrder;
    if(root==nullptr){
        return postOrder;
    }
    stack<Node*>st1,st2;
    st1.push(root);
    while(!st1.empty()){
        Node* node=st1.top();
        st1.pop();
        st2.push(node);
        if(node->left!=nullptr){
            st1.push(node->left);
        }
        if(node->right!=nullptr){
            st1.push(node->right);
        }
    }
    while(!st2.empty()){
        postOrder.push_back(st2.top()->value);
        st2.pop();
    }
    return postOrder;
}