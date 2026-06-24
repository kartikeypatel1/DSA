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
//removing the first element of the linked list
Node* frontDelete(Node *head){
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}
//remove the last element of the linked list
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


// delete the element with Kth position 
Node* deleteatKpos(Node*head,int k){

    if(head==nullptr) return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int cnt=0;
    Node*temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;

}
//delete the element with the value pass in the function
Node* deleteElementWithValue(Node*head,int val){

    if(head==nullptr) return head;
    if(head->data==val){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node*temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr){
        if(temp->data==val){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;

}

//convert the array in to linked list
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
    // head=backDelete(head);
    // head=deleteatKpos(head,2);
    head=deleteElementWithValue(head,5);
    Node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}