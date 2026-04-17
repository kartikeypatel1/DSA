#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n<2) return 1;
    return factorial(n-1)+factorial(n-2);
}
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    cout<<"Fibonacci of "<<n<<" is "<<factorial(n)<<endl;
    return 0;   
}   