#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>n;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int maxelement=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            maxelement=max(maxelement,a[i][j]);
        }
    }
    cout<<"Largest element in the matrix is "<<maxelement<<endl;
}