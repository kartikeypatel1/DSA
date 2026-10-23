#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};


class Solution {
public:
    Node* solve(Node* root, int &k, int node) {
        if (root == nullptr) {
            return nullptr;
        }

        if (root->data == node) {
            return root;
        }

        Node* leftAns = solve(root->left, k, node);
        Node* rightAns = solve(root->right, k, node);

        if (leftAns != nullptr || rightAns != nullptr) {
            k--;

            if (k == 0) {
                return root;
            }

            return (leftAns != nullptr) ? leftAns : rightAns;
        }

        return nullptr;
    }

    int kthAncestor(Node* root, int k, int node) {
        Node* ans = solve(root, k, node);

        if (ans == nullptr || ans->data == node) {
            return -1;
        }

        return ans->data;
    }
};
int main(){
    

}