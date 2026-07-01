#include<bits\stdc++.h>
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
int helper(Node* slow,Node*fast){
    int cnt=1;
    fast=fast->next;
    while(slow!=fast){
        cnt++;
        fast=fast->next;
    }
    return cnt;
}
int lengthOfLoop(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL&&fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return helper(slow, fast);
        }
    }
    return 0;
}
int main(){

}