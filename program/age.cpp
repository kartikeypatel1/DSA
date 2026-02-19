#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter the age :";
    cin>>age;
    if(age>=18&&age<=40){
        cout<<"adult"<<endl;

    }
    else if(age<18){
        cout<<"minor"<<endl;

    }
    else{
        cout<<"old"<<endl;
    }
}
