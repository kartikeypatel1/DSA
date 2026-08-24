#include<bits/stdc++.h>
using namespace std;
char postfixToInfix(string s){
    int n=s.size();
    int i=0;
    stack<char> st;
    while(i<n){
        if((s[i]>='A'&& s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')){
            st.push(s[i]);
        }
        else{
            char t1=st.top();
            st.pop();
            char t2=st.top();
            char result='('+t2+s[i]+t1+')';
            st.push(result);


        }
        i++;
    }
    return st.top();
}
int main(){
string s;
cout<<"Enter the Expression:";
cin>>s;
cout<<"Infix expression is:"<<postfixToInfix(s);
}