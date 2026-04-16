#include<bits/stdc++.h>
using namespace std;
string removeAllOccurences(string &s,char c,int i){
    if(i==s.size()) return "";
    string ans=removeAllOccurences(s,c,i+1);
    if(s[i]==c) return ans;
    return s[i]+ans;
}
int main(){
    string s;
    char c;
    cout<<"Enter the string:";
    cin>>s;
    cout<<"Enter the character to remove:";
    cin>>c;
    string result=removeAllOccurences(s,c,0);
    cout<<"The string after removing all occurrences of '"<<c<<"' is: "<<result<<endl;
    return 0;
}