#include<bits/stdc++.h>
using namespace std;
bool binarySearch(vector<int> &arr, int target, int left, int mid, int high){
    if(arr[mid]==target){
        return true;
    }
    if(left>high){
        return false;
    }

    if(arr[mid]>target){
        high=mid-1;
        mid=left+(high-left)/2;
        binarySearch(arr,target,left,mid,high);
    }else{
        left=mid+1;
        mid=left+(high-left)/2;
        binarySearch(arr,target,left,mid,high);
    }
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8};
    int mid=0+(8-0)/2;
    cout<<binarySearch(arr,10,0,mid,8);
}