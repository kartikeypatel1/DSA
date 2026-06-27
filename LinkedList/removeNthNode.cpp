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
Node* removeNthNode(Node* head,int k){
    Node* fast=head;
    Node* slow=head;
    for(int i=0;i<k;i++) fast=fast->next;
    if(fast==NULL) return head->next;
    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    Node* deleteNode=slow->next;
    slow->next=slow->next->next;
    free(deleteNode);
    return head;
}
int main(){

}