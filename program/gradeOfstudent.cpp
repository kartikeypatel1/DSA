#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter the marks of the student:";
    cin>>marks;
    if(marks>=90){
        cout<<"A+";
    }
    else if( marks>=80&&marks<90){
        cout<<"A";
    }
    else if(marks>=60&&marks<80){
        cout<<"B";
    }
    else if(marks>=40&&marks<60){
        cout<<"C";
    }
    else{
        cout<<"F";
    }
}