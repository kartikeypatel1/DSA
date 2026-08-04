#include<bits/stdc++.h>
using namespace std;
//using left shift operator
// bool checkIthBit(int n, int i){
//     return (n & (1<<i))!=0;
// }


//using right shift operator
bool checkIthBit(int n, int i){
    return (n>>i)&1;
}
int main(){
    int n,i;
    cin>>n>>i;
    if(checkIthBit(n,i)){
        cout<<"Set";
    }else{
        cout<<"Not Set";
    }
}