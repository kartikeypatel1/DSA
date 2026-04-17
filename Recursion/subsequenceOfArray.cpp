#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> subssequenceArray(vector
<int>& arr,int index,vector<int> &temp,vector<vector<int>> &ans){
    if(index>=arr.size()){
        ans.push_back(temp);
        return ans;
    }
    //include the element
    temp.push_back(arr[index]);
    subssequenceArray(arr,index+1,temp,ans);
    //exclude the element
    temp.pop_back();
    subssequenceArray(arr,index+1,temp,ans);
    return ans;
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
    vector<vector<int>> ans;
    vector<int> temp;
    subssequenceArray(arr,0,temp,ans);
    cout<<"The subsequences of the array are: "<<endl;
    for(auto &v:ans){
        cout<<"[";
        for(auto &x:v){
            cout<<x<<" ";
        }
        cout<<"]"<<endl;
    }
    return 0;
}