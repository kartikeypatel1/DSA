#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data=value;
        next=nullptr;
    }
};
Node* oddEvenLL(Node*head){
    if(head==NULL||head->next==NULL) return head;
    Node* odd=head;
    Node* even=head->next;
    Node* evenHead=head->next;
    while(even!=NULL||even->next!=NULL){
        odd->next=odd->next->next;
        even->next=even->next->next;

        odd=odd->next;
        even=even->next->next;
    }
    odd->next=evenHead;
    return head;
}
int main(){

}