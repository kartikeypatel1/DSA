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
bool isPalindrome(Node*head){
    if(head==nullptr||head->next==nullptr) return head;
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=nullptr&&fast->next->next!=nullptr){
        slow=slow->next;
        fast=fast->next;
    }
    Node* newNode=reverse(slow->next);
    Node* first=head;
    Node*second=newNode;
   while(second!=nullptr){
    if(first->data!=second->data){
        reverse(newNode);
        return false;
    }
    first=first->next;
    second=second->next;
   }
   reverse(newNode);
   return true;
    
}
int main(){

}