#include<bits/stdc++.h>
using namespace std;
int priority(char c){
    if(c=='^'){
        return 3;
    }else if(c=='/'||c=='*'){
        return 2;
    }else if(c=='-'||c=='+'){
        return 1;
    }
    return -1;
}
string infixToPrefix(string s){
       reverse(s.begin(),s.end());
       int i=0;
       stack<char> st;
       string ans="";
       while(i<s.size()){
        if((s[i]>='A'&& s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')){
            ans =ans+s[i];
        }
        else if(s[i]==')'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            while(st.empty()&&st.top()!=')'){
                ans+=st.top();
                st.pop();
            }
            st.pop();
        }
         else{
        if(s[i]=='^'){
            while(!st.empty()&&priority(s[i])<=priority(st.top())){
                ans=ans+st.top();
                st.pop();

            }
        }else{
            while(!st.empty()&&priority(s[i])<priority(st.top())){
                ans+=st.top();
                st.pop();
            }
        }
         st.pop();
       }
      
       }

      while(!st.empty()){
        ans+=st.top();
        st.pop();
      }
    reverse(ans.begin(),ans.end());
return ans;
}
int main(){
    string s;
    cout<<"Enter the infix expression";
    cin>>s;
    cout<<"Prefix expression is :"<<infixToPrefix(s);
}