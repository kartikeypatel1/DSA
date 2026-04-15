#include<iostream>
#include<vector>

using namespace std;
int maximumofArray(vector<int> &arr,int size){    if(size==1) return arr[0];
int last=arr[size-1];
int answer=maximumofArray(arr,size-1);
return max(last,answer);
}
int main(){
    int n;
    cout<<"enter the number of elements in the array:";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"The maximum element in the array is "<<maximumofArray(arr,n)<<endl;
    return 0;
}
