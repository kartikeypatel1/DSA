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
//BruteForce

Node* pairSum(Node* head, int target){
    Node* temp1=head;
    vector<vector<int>> result;
    while(temp1!=nullptr){
        Node* temp2=temp1->next;
        while(temp2!=nullptr&& temp1->data+temp2->data<=target){
            if(temp1->data+temp2->data==target){
                result.push_back({temp1->data,temp2->data});
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
    return head;
}

//optimised
Node* findTail(Node* head){
    Node* tail=head;
    while(tail->next!=nullptr) tail=tail->next;
    return tail;
}
vector<vector<int>> pairSumWithTarget(Node* head,int target){
    vector<vector<int>> result;
    if(head==nullptr) return result;
    Node *left=head;
    Node* right=findTail(head);
    while(left->data<right->data){
        if(left->data+right->data==target){
            result.push_back({left->data+right->data});
            left=left->next;
            right=right->prev;
        }
        else if(left->data+right->data<target){
            left=left->next;
        }else{
            right=right->prev;
        }
    }
    return result;
}
int main(){

}