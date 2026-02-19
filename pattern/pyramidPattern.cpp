#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=0;i<n;i++){
        //sapces
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        //first triangle
        for(int j=0;j<i+1;j++){
            cout<<j+1<<" ";
        }
        // second triangle
        for(int j=i;j>0;j--){
            cout<<j<<" ";
        }
     cout<<endl;
       
    }
}