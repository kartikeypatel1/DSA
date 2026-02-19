#include<bits/stdc++.h>
using namespace std;
char convert(char name){
    return name-'a'+'A';//yaha pr alphabet jo bhi milega usme se hm phle small letter a hta denge tb vo hme number de dega then hm log usme A add kr denge jisse hme hmara outcome mil jayega
}
int main(){
    char word;
    cout<<"Enter your alphabet";
    cin>>word;
    cout<<convert(word);


}