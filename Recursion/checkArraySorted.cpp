#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>& arr,int i){
    if(i==arr.size()-1) return true;
    if(arr[i]>arr[i+1]) return false;
    return isSorted(arr,i+1);
}
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++) cin>>arr[i];
    if(isSorted(arr,0)) cout<<"The array is sorted."<<endl;
    else cout<<"The array is not sorted."<<endl;
    return 0;
}