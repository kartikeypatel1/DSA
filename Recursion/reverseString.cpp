#include<bits/stdc++.h>
using namespace std;
string reverseString(string& s, int left,int right){
    if(left>right){
        return s;
    }
    swap(s[left],s[right]);
    return reverseString(s,left+1,right-1);
}
int main(){
string s="STRIGNS";
int right=s.size()-1;
cout<<reverseString(s,0,right);
}