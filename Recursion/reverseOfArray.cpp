#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<int>& arr,int i,int j){
    if(i>=j) return;
    swap(arr[i],arr[j]);
    reverseArray(arr,i+1,j-1);
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(arr,0,n-1);
    cout<<"The reversed array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}