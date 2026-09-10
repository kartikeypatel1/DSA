#include<bits/stdc++.h>
using namespace std;
int arraySum(vector<int>arr,int i,int sum){
    if(arr.size()==1){
        return arr[0];
    }
    if(i==arr.size()-1){
        return arr[i];
    }
    sum=sum+arr[i]+arraySum(arr,i+1,sum);
    return sum;
}
int main(){
    vector<int> arr={1,2,35,5};
    int size=5;
    cout<<arraySum(arr,0,0);
}