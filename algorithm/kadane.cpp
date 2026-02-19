#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=accumulate(arr.begin(),arr.end(),0);
    int prefix_sum=0;
    int notfound=0; 
    for(int i=0;i<n;i++){
        prefix_sum+=arr[i];
        int suffix_sum=sum-prefix_sum;
        if(prefix_sum==suffix_sum){
            cout<<"Equilibrium index is: "<<i<<endl;
            notfound=1;
            break;
        }
    }
    if(notfound){
        cout<<"No equilibrium index found"<<endl;
    }    return 0;
    
}