#include<bits/stdc++.h>
using namespace std;
int factorial(int n,vector<int> &dp){
    if(n==0||n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    else return dp[n]=n*factorial(n-1,dp);
}
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<"Factorial of "<<n<<" is "<<factorial(n,dp)<<endl;
    return 0;   
}