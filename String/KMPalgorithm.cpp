#include<bits/stdc++.h>
using namespace std;

void computeLPS(string &pat,vector<int> &LPS,int n){
      int len=0;
      LPS[0]=0;
      int i=1;
      while(i<n){
          if(pat[i]==pat[len]){
              len++;
              LPS[i]=len;
              i++;
          }else{
              if(len!=0){
                  len=LPS[len-1];
              }
              else{
                  LPS[i]=0;
                  i++;
              }
          }
      }
  }
int main(){

    string txt,pat;
    cin>>txt>>pat;
    int m=pat.size();
    int n=txt.size();
    vector<int> LPS(m);
    computeLPS(pat,LPS,m);
    int i=0,j=0;
    while(i<n){
        if(txt[i]==pat[j]){
            i++;
            j++;
        }
        if(j==m){
            cout<<"Pattern found at index "<<i-j<<endl;
            j=LPS[j-1];
        }
        else if(i<n && txt[i]!=pat[j]){
            if(j!=0){
                j=LPS[j-1];
            }
            else{
                i++;
            }
        }
    }
}