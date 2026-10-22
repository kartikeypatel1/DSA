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
void solve(Node* root,vector<int> &ans,int level){
    if(root==nullptr){
        return;
    }
    if(ans.size()==level){
        ans.push_back(root->data);
    }
    solve(root->right,ans,level+1);
    solve(root->left,ans,level+1);
}
vector<int> rightview(Node* root){
    vector<int> ans;
    solve(root,ans,0);
    return ans;
}
int main(){
    

    
    return 0;
}