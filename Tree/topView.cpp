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
vector<int> topView(Node* root){
    vector<int> ans;
    if(root==nullptr){
        return ans;
    }
    map<int,int> mp;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        Node* topNode=q.front().first;
        int hd=q.front().second;
        q.pop();

        if(mp.find(hd)==mp.end()){
            mp[hd]=topNode->data;
        }
        if(topNode->left){
            q.push(make_pair(topNode->left,hd-1));
        }
        if(topNode->right){
            q.push(make_pair(topNode->right,hd+1));
        }
    }
    for(auto i:mp){
        ans.push_back(i.second);
    }
    return ans;
}
int main(){

}