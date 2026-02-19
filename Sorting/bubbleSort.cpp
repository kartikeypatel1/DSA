#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the values of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool swapped=0;
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        if(swapped==0){
            cout<<"Given array is already soreted ";
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}