#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* frontDelete(Node *head){
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}

Node* backDelete(Node* head){
    if(head==NULL||head->next==nullptr) return NULL;
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;
}
Node* convertArr2LL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int main(){
    vector<int> arr={2,3,4,2,5};
    Node* head=convertArr2LL(arr);
    // head=frontDelete(head);
    head=backDelete(head);
    cout<<head->data;
}