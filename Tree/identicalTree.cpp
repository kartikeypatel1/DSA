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
bool identicalTree(Node* r1,Node*r2){
    if(r1==nullptr&&r2==nullptr){
        return true;
    }
    if(r1!=nullptr&&r2==nullptr){
        return false;
}
    if(r1==nullptr&&r2!=nullptr){
        return false;
    }
    bool left=identicalTree(r1->left,r2->left);
    bool right=identicalTree(r1->right,r2->right);

    bool ans=r1->value==r2->value;
    if(left&&right&&ans){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    
}