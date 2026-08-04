#include<bits/stdc++.h>
using namespace std;
bool checkNoPowerOfTwo(int n){
    return (n & (n-1))==0;
}
int main(){
    int n;
    cin>>n;
    if(checkNoPowerOfTwo(n)){
        cout<<"Yes, the number is a power of two."<<endl;
    } else {
        cout<<"No, the number is not a power of two."<<endl;
    }
    return 0;
}