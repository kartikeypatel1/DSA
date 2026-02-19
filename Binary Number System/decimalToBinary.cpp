#include<iostream>
using namespace std;
int decimalToBinary(int n){
    int ans=0;
    int pow=1;
    while(n>0){
        int rem=n%2;
        n=n/2;
        ans+=(rem*pow);
        pow=pow*10;
    }
    return ans;
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<decimalToBinary(num);

    
}