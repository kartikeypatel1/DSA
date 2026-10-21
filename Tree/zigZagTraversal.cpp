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
vector<int> zigZagTraversal(Node* root){
    vector<int> result;
    if(root==nullptr){
        return result;
    }
    queue<Node*> q;
    q.push(root);
    bool leftToRight=true;
    while(!q.empty()){
        int size=q.size();
        vector<int> ans(size);
        for(int i=0;i<size;i++){
            Node* node=q.front();
            q.pop();
            int index=leftToRight?i:(size-1-i);
            ans[index]=node->value;
            if(node->left!=nullptr){
                q.push(node->left);
            }
            if(node->right!=nullptr){
                q.push(node->right);
            }
        }
        leftToRight=!leftToRight;
        for(auto &val:ans){
            result.push_back(val);
        }
    }
    return result;
}
int main(){
    // Create a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);   
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    vector<int> result = zigZagTraversal(root);
    for(int val : result){
        cout<<val<<" ";
    }
    return 0;
}
