#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums,int idx,int sum,vector<int>&res){
    if(idx==nums.size()){
        res.push_back(sum);
        return;
    }
    sum+=nums[idx];
    solve(nums,idx+1,sum,res);
    sum-=nums[idx];
    solve(nums,idx+1,sum,res);
  }
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> res;
    solve(nums,0,0,res);
    sort(res.begin(),res.end());   
    cout<<"The sum of all the subsequences are: "<<endl;
    for(auto &x:res){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;   
}