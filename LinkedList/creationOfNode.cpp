// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
// };
// int main(){
//     Node *Head=new Node();
//     Head->data=4;
//     Head->next=nullptr;
//     cout<<Head;
// }


//another way of creating the node of the linked list;

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
int main(){
    Node *Head=new Node(4);
    cout<<Head->data<<endl;
    cout<<Head->next;
}