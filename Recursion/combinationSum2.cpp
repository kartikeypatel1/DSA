#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&candidates,int target,int index,vector<vector<int>> &res,vector<int> &temp){
    if(target==0){
        res.push_back(temp);
        return;
    }
    for(int i=index;i<candidates.size();i++){
        if(i>index && candidates[i]==candidates[i-1]) continue;
        if(candidates[i]>target) break;
        temp.push_back(candidates[i]);
        solve(candidates,target-candidates[i],i+1,res,temp);
        temp.pop_back();
    }
}
int main(){
    int n,target;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> candidates(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>candidates[i];
    }
    cout<<"Enter the target sum: ";
    cin>>target;
    vector<vector<int>> res;
    vector<int> temp;
    sort(candidates.begin(),candidates.end());
    solve(candidates,target,0,res,temp);
    cout<<"The combinations with sum "<<target<<" are: "<<endl;
    for(auto &v:res){
        cout<<"[";
        for(auto &x:v){
            cout<<x<<" ";
        }
        cout<<"]"<<endl;
    }
    return 0;
}