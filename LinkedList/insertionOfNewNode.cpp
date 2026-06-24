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
//insert at the front
Node* insertHead(Node *head,int val){
    Node* temp=new Node(val);
    temp->next=head;
    return temp;
}
//insert at the back
Node* insertElementAtBack(Node*head,int val){
    if(head==nullptr){
        Node* head=new Node(val);
        return head;
    }
    Node *temp=new Node(val);
    Node*mover=head;
    while(mover->next!=nullptr){
        mover=mover->next;
    }
    mover->next=temp;
    return head;
}
//insert element at any position
Node* insertElementatKPosition(Node* head,int element,int pos){
    if(head==NULL) {
        if(pos==1)return new Node(element);
        else return NULL;
    }
    if(pos==1){
        Node*temp=new Node(element);
        temp->next=head;
        return temp;
    }
    int cnt=0;
    Node*temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==(pos-1)){
            Node* x=new Node(element);
            x->next=temp->next;
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
return head;
}

//insert value before a the value given
Node* insertElementBeforetheValue(Node* head,int element,int val){
    if(head==NULL) {
        return nullptr;
    }
    if(head->data==val){
        Node*temp=new Node(element);
        temp->next=head;
        return temp;
    }
    Node*temp=head;
    while(temp->next!=NULL){
        if(temp->next->data==val){
            Node* x=new Node(element);
            x->next=temp->next;
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
return head;
}


Node *convertArr2LL(vector<int>&arr){
    Node *head=new Node(arr[0]);
    Node*mover=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int main(){
vector<int> arr={2,3,5,3,2,4};
Node*head=convertArr2LL(arr);
// head=insertHead(head,100);
// head=insertElementAtBack(head,200);
// head=insertElementatKPosition(head,6,3);
head=insertElementBeforetheValue(head,7,5);
Node*temp=head;
while(temp!=nullptr){ 
    cout<<temp->data<<" ";
    temp=temp->next;
}
// cout<<head->data;
    //linked list exist karti h

}