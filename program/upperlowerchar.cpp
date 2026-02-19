#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character:";
    cin>>ch;
    if(ch>=97&&ch<=122){
        cout<<"enter character is lowercase.";
    }
    else if(ch>=65&&ch<=90){
        cout<<"enter character is uppercase";
    }
    else{
        cout<<"invalid character.";
    }


}
