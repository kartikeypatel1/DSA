#include<bits/stdc++.h>
using namespace std;


// void print(int n){
//     if(n==0) 
//     cout<<"Happy Birthday"<<endl;
//     else{
//         cout<<n<<"days left for your birthday"<<endl;
//         print(n-1);
//     }
// }


// int reverseNumber(int n){
//     if(n==1) cout<<1; 
//     else{
//         cout<<n<<" ";
//         return reverseNumber(n-1);  
//     }
// }



// void evenNumber(int n){
//     if(n==0)cout<<n<<" ";
// else{
//     cout<<n<<" ";
//     evenNumber(n-2);
// }}

//print 1 to n
void print(int n,int number){
    if(n==number) {cout<<number<<" ";
    return;}
    else{
        cout<<n<<" ";
        print(n+1,number);
    }
}

int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    print(1,n);
    return 0;
}