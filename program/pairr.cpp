#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){

    //direct initialization
    // pair<int,int> p1={1,2};
    // pair<int,int> p2={3,4};
    // pair<int,int> p3=p1;
    // cout<<p1.first<<" "<<p1.second<<endl;
    // cout<<p2.first<<" "<<p2.second<<endl;
    // cout<<p3.first<<" "<<p3.second<<endl;
    //second method for the initialization of the pair
    pair<string,int> p;
    p=make_pair("abc",1);
    cout<<p.first<<" "<<p.second<<endl;
}
