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
vector<int> preOrderIterative(Node* root){
    vector<int> preOrder;
    if(root==nullptr){
        return preOrder;
    }
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        Node* node=st.top();
        st.pop();
        preOrder.push_back(node->value);
        if(node->right!=nullptr){
            st.push(node->right);
        }
        if(node->left!=nullptr){
            st.push(node->left);
        }
    }
    return preOrder;
}
