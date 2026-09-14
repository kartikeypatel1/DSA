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
vector<vector<int>> levelOrderTraversal(Node * root){
    vector<vector<int>> result;
    if(root==nullptr){
        return result;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            Node* node= q.front();
            q.pop();
            if(node->left!=NULL) q.push(node->left);;
            if(node->right!=NULL) q.push(node->right);
            level.push_back(node->value);
        }
        result.push_back(level);
    }
    return result;

}
int main(){

}