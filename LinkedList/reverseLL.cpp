#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
Node* reverseLL(Node* head){
    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr){
        Node* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}

//recursive function for the reversing the linked list

Node* reverse(Node* head){
    if(head==NULL||head->next==nullptr){
        return head;

    }
    Node* newHead=reverse(head->next);
    Node* front=head->next;
    front->next=head;
    head->next=nullptr;
    return newHead;
}
int main(){

}