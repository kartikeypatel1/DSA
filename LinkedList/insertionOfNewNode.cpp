#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=nullptr;
    }
};
int main(){
    Node *Head;
    //insert node at the beginning

int arr[]={2,4,5,6,8};
    //linked list does not exist
    for(int i=0;i<5;i++){
    if(Head==nullptr){
        Head=new Node(arr[i]);
    }
    else{
        Node *temp;
        temp=new Node(arr[i]);
        temp->next=Head;
        Head=temp;

    }
}
//print the value
Node *temp=Head;
while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
}
    //linked list exist karti h

}