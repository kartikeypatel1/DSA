#include<bits/stdc++.h>
using namespace std;
void count(vector<int> &nums,int target,int sum,int index,vector<vector<int>> &res,vector<int> &temp){
    if(index>=nums.size()){
        if(sum==target){
            res.push_back(temp);
        }
        return;
    }
    temp.push_back(nums[index]);
    sum+=nums[index];
        count(nums,target,sum,index+1,res,temp);
        temp.pop_back();
        sum-=nums[index];
        count(nums,target,sum,index+1,res,temp);
        
}
int main(){
    int n,target;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Enter the target sum: ";
    cin>>target;
    vector<vector<int>> res;
    vector<int> temp;
    count(nums,target,0,0,res,temp);
    cout<<"The subsequences with sum "<<target<<" are: "<<endl;
    for(auto &v:res){
        cout<<"[";
        for(auto &x:v){
            cout<<x<<" ";
        }
        cout<<"]"<<endl;
    }
    cout<<"The number of subsequences with sum "<<target<<" is: "<<res.size()<<endl;
    return 0;
}












// #include<bits/stdc++.h>
// using namespace std;
// int count(vector<int> &nums,int target,int sum,int index){
    
//     if(index==nums.size()){
//         if(sum<=target){
//             return 1;
//         }
//         else return 0;
        
//     }
//         sum+=nums[index];
//         int l=count(nums,target,sum,index+1);
//         sum-=nums[index];
//         int r=count(nums,target,sum,index+1);
//        return l+r; 
// }
// int main(){
//     int n,target;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     vector<int> nums(n);
//     cout<<"Enter the elements of the array: ";
//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
//     cout<<"Enter the target sum: ";
//     cin>>target;
    
//     cout<<"The number of subsequences with sum "<<target<<" is: "<<count(nums,target,0,0)<<endl;
//     return 0;
// }
