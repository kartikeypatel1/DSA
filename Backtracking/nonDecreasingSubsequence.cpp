#include<bits/stdc++.h>
using namespace std;
void backtrack(vector<int> &arr,int idx,vector<int> &temp, vector<vector<int>> &result){
    if(idx==arr.size()){
        if(temp.size()>=2)
         result.push_back(temp);
        return;
    }
    if(temp.size()>=2){
        result.push_back(temp);
    }
    unordered_set<int> st;
    for(int i=idx;i<arr.size();i++){
        if((temp.empty()||arr[i]>=temp.back())&&(st.find(arr[i])==st.end())){
            temp.push_back(arr[i]);
            backtrack(arr,i+1,temp,result);
            temp.pop_back();
            st.insert(arr[i]);
        }
    }
}
vector<vector<int>> nonDecreasingSubsequences(vector<int> &nums){
    vector<vector<int>> result;
    vector<int> temp;
    backtrack(nums,0,temp,result);
    return result;
}
int main(){
    
}