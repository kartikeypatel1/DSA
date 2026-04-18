#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr,int idx,vector<int> &temp,vector<vector<int>> &res){
      res.push_back(temp);
      for(int i=idx;i<arr.size();i++){
          if(i!=idx &&arr[i]==arr[i-1]) continue;
          temp.push_back(arr[i]);
          solve(arr,i+1,temp,res);
          temp.pop_back();
      }
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
    vector<vector<int>> res;
    vector<int> temp;
    sort(arr.begin(),arr.end());
    solve(arr,0,temp,res);
    cout<<"The subsets are: "<<endl;
    for(auto &v:res){
        cout<<"[";
        for(auto &x:v){
            cout<<x<<" ";
        }
        cout<<"]"<<endl;
    }
    return 0;
  }