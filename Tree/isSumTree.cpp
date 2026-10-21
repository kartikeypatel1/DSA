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
pair<bool,int> isSumTree(Node* root){
    if(root==nullptr){
        pair<bool,int> p=make_pair(true,0);
        return p;
    }
    if(root->left==nullptr&&root->right==nullptr){
        pair<bool,int> p=make_pair(true,root->value);
        return p;
    }

    pair<bool,int> left=isSumTree(root->left);
    pair<bool,int> right=isSumTree(root->right);

    bool isLeftSumTree=left.first;
    bool isRightSumTree=right.first;
    bool condition=root->value==(left.second+right.second);
    pair<bool,int> ans;
    if(isLeftSumTree&&isRightSumTree&&condition){
        ans.first=true;
        ans.second=2*root->value;
    }
    else{
        ans.first=false;
    }
    return ans;
}
int main(){

}