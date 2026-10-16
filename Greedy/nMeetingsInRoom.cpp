#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> meetings(n);
    for(int i=0;i<n;i++){
        cin>>meetings[i].first>>meetings[i].second;
    }
    sort(meetings.begin(),meetings.end(),[](pair<int,int> a,pair<int,int> b){
        return a.second<b.second;
    });
    int count=1;
    int endTime=meetings[0].second;
    for(int i=1;i<n;i++){
        if(meetings[i].first>=endTime){
            count++;
            endTime=meetings[i].second;
        }
    }
    cout<<count<<endl;
}