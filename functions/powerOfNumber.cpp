#include<iostream>
using namespace std;
int powOfNumber(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans*=a;
    }
    return ans;
}
int main(){
    cout<<powOfNumber(5,4)<<endl;
    cout<<powOfNumber(2,5)<<endl;
}