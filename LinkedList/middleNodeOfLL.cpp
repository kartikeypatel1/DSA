#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=nullptr;
    }
};
Node *middleNode(Node*head){
    Node* slow=head;
    Node* fast=head;
    while(head!=NULL&head->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}