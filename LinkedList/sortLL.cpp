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
Node* sortList(Node* head){
    if(head==nullptr||head->next==nullptr) return head;
    Node*zeroHead=new Node(-1);
    Node*oneHead=new Node(-1);

    Node*twoHead=new Node(-1);
    Node* zero=zeroHead;
    Node* one=oneHead;
    Node* two=twoHead;
    Node*temp=head;
    while(temp!=nullptr){
        if(temp->data==0){
            zero->next=temp;
            zero=zero->next;
        }
        else if(temp->data==1){
            one->next=temp;
            one=one->next;
        }
        else{
            two->next=temp;
            two=two->next;
        }
        temp=temp->next;
    }
    zero->next=(oneHead->next)?(oneHead->next):(twoHead->next);
    one->next=twoHead->next;
    two->next=NULL;
    Node* newHead=zeroHead->next;
    delete(zeroHead);
    delete(oneHead);
    delete(twoHead);
    return newHead;

}
int main(){

}