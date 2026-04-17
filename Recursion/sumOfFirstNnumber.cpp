#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int sumNno(int n,int i){
    if(i>n){
        return 0;
    }
    return i+sumNno(n,i+1);
}
int main() {
    int n;
    cin>>n;
    cout<<sumNno(n,1);
    
    return 0;
}