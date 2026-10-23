#include <bits/stdc++.h>
using namespace std;
class Node {
  public:
    int data;
    Node *left;
    Node *right;
    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
}; 
void solve(struct Node* root,int len,int sum,int &maxSum,int &maxLen){
    if(root==nullptr){
        if(len>maxLen){
            maxLen=len;
            maxSum=sum;
        }
        if(len==maxLen){
            maxSum=max(sum,maxSum);
        }
        return;
    }
    sum+=root->data;
    solve(root->left,len+1,sum,maxSum,maxLen);
    solve(root->right,len+1,sum,maxSum,maxLen);
}
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
        int len=0;
    int maxLen=0;
    int sum=0;
    int maxSum=INT_MIN;
    solve(root,len,sum,maxSum,maxLen);
    return maxSum;
    }
    int main() {
        // Create a sample binary tree
        Node* root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);
        root->left->left = new Node(4);
        root->left->right = new Node(5);
        root->right->right = new Node(6);

        int result = sumOfLongRootToLeafPath(root);
        cout << "Sum of the longest path from root to leaf: " << result << endl;

        // Clean up memory (delete nodes)
        delete root->left->left;
        delete root->left->right;
        delete root->left;
        delete root->right->right;
        delete root->right;
        delete root;

        return 0;
    }