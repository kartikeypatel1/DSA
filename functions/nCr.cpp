#include<iostream>
using namespace std;
int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n,int r){
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}
int main(){
    int a,b;
    cout<<"Enter the n and r value:"<<endl;
    cin>>a>>b;
    cout<<nCr(a,b)<<endl;
}