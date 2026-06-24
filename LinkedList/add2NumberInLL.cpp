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
Node* addTwoNumber(Node*num1,Node*num2){
    Node*dummyNode=new Node(-1);
    Node*curr=dummyNode;
    Node*temp1=num1;
    Node*temp2=num2;
    int carry=0;
    while(temp1!=nullptr||temp2!=nullptr){
        int sum=carry;
        if(temp1) sum+=temp1->data;
        if(temp2) sum+=temp2->data;
        Node* newNode=new Node(sum%10);
        carry=sum/10;
        curr->next=newNode;
        curr=curr->next;
        if(temp1) temp1=temp1->next;
        if(temp2) temp2=temp2->next;
    }
    if(carry){
        Node* newNode=new Node(carry);
        curr->next=newNode;
    }
    return dummyNode->next;
}
int main(){

}