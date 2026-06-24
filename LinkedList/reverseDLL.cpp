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

Node* reverseDLL(Node*head){
    if(head==NULL||head->next==NULL) return head;
    Node*prev=nullptr;
    Node*current=head;
    while(current!=nullptr){
        prev=current->prev;
        current->prev=current->next;
        current=current->prev;
    }
    return prev->prev;

}
//we use stack to reverse the DLL

int main(){
    Node*head=new Node(4);

    Node*temp=head;
    stack<int> st;
    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        temp->data=st.top();
        st.pop();
        temp-temp->next;
    }

}