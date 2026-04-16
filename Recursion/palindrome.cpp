#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s,int i,int j){
    if(s[i]!=s[j]) return false;
    if(i>=j) return true;
    return isPalindrome(s,i+1,j-1);
}
int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    if(isPalindrome(s,0,s.size()-1)) cout<<"The string is a palindrome."<<endl;
    else cout<<"The string is not a palindrome."<<endl;
    return 0;
}