#include<bits/stdc++.h>
using namespace std;
int main(){
    //create 2d vector
    // vector<vector<int>> a;
    // int n,m;
    // cin>>n>>m;
    // for(int i=0;i<n;i++){
    //     vector<int> temp;
    //     for(int j=0;j<m;j++){
    //         int x;
    //         cin>>x;
    //         temp.push_back(x);
    //     }
    //     a.push_back(temp);
    // }
    vector<vector<int> > a(3,vector<int>(4,1));
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j];
        }
    }
}
