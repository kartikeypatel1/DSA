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
Node* deleteAllOccurences(Node* head,int k){
    Node* temp=head;
    while(temp!=nullptr){
        if(temp->data==k){
            if(temp==head){
                head=head->next;
            }
            Node* nextNode=temp->next;
            Node* prevNode=temp->prev;
            if(nextNode!=nullptr) nextNode->prev=prevNode;
            if(prevNode!=nullptr) prevNode->next=nextNode;
            free(temp);
            temp=nextNode;
        }
        else{
            temp=temp->next;

        }
    }
    return head;
}
int main(){

}