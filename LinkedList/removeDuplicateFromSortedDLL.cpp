#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next,*prev;
    public:
    Node(int value){
         data=value;
        prev=nullptr;
        next=nullptr;
    }
    Node(){
        data=0;
        prev=nullptr;
        next=nullptr;
    }
    Node(int value,Node* next,Node* prev){
        data=value;
        next=next;
        prev=prev;
    }
};
Node* removeDuplicate(Node* head){
    Node* temp=head;
    while(temp!=nullptr&& temp->next==nullptr){
        Node* nextNode=temp->next;
        while(nextNode!=nullptr&& nextNode->data==temp->data){
            Node* duplicate=nextNode;
            nextNode=nextNode->next;
            free(duplicate);
        }
        temp->next=nextNode;
        if(nextNode!=nullptr) nextNode->prev=temp;
        temp=temp->next;
    }
    return head;
}