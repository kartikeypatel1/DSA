// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){ 
//     int  n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//    int ans=INT32_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             ans=max(ans,arr[j]-arr[i]);
//         }
//     }
//     cout<<"Maximum difference is: "<<ans<<endl;
//     return 0;
// }


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){ 
    int  n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int suffix=arr[n-1];
    int ans=INT32_MIN;
    for(int i=n-2;i>=0;i--){
        ans=max(ans,suffix-arr[i]);
        suffix=max(suffix,arr[i]);
    }
    cout<<"Maximum difference is: "<<ans<<endl;
    return 0;
}