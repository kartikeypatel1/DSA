#include<bits/stdc++.h>
using namespace std;
bool linearSearch(vector<int>& arr,int target,int i){
    if(arr[i]==target){
        return true;
    }
    if(i==arr.size()-1){
        return false;
    }
    linearSearch(arr,target,i+1);
}
int main(){
    vector<int> arr={12,3,45,64,3};
    bool ans=linearSearch(arr,3,0);
   if(ans){
    cout<<"Element is present";
   }else{
    cout<<"element is not present";
   }
}