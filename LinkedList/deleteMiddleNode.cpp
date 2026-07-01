#include<bits\stdc++.h>
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
Node* removeMiddle(Node*head){
    Node*slow=head;
    Node* fast=head;
    fast=head->next->next;
    while(fast!=NULL&&fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* middle=slow->next;
    free(middle);
    slow->next=slow->next->next;
    return head;
}
int main(){

}