#include<bits/stdc++.h>
using namespace std;
void backtrack(vector<int> & nums,int n,int idx,vector<int> &temp,vector<vector<int>> &res){
    if(idx==n){
        res.push_back(temp);
        return;
    }
    //exclude the element
    backtrack(nums,n,idx+1,temp,res);
    //include the element
    temp.push_back(nums[idx]);
    backtrack(nums,n,idx+1,temp,res);
    temp.pop_back();

}
int main(){
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++) cin>>nums[i];
    vector<vector<int>> res;
    vector<int> temp;
    backtrack(nums,n,0,temp,res);
    cout<<"The subsets of the given array are:"<<endl;
    for(auto &x:res){
        cout<<"[";
        for(auto &y:x) cout<<y<<" ";
        cout<<"]"<<endl;
    }
    return 0;
}