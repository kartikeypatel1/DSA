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

vector<int> inOrderTraversal(Node* root){
    vector<int> inOrder;
    if(root==nullptr){
        return inOrder;
    }
    stack<Node*> st;
    Node* current=root;
    while(current!=nullptr || !st.empty()){
        while(current!=nullptr){
            st.push(current);
            current=current->left;
        }
        current=st.top();
        st.pop();
        inOrder.push_back(current->value);
        current=current->right;
    }
    return inOrder;
}