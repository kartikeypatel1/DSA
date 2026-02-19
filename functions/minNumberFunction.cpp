#include<iostream>
using namespace std;
 double minNumber(double a,double b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
 }
 int main(){
    cout<<"Minimum number is :"<<minNumber(44.33,8.9)<<endl;
 }