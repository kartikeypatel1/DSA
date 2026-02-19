#include<iostream>
using namespace std;
int main(){
    int a=4,b=8;
    cout<<(a&b)<<endl;   //this is the bitwise AND and give the output basis on the AND gate table
    cout<<(a|b)<<endl;// this is the bitwise OR and give the output basis on the OR gate table

    cout<<(a^b)<<endl;// thit is the bitwise XOR and give the output basis on the XOR gate table

    cout<<(4<<2)<<endl;//this is bitwise left shift operator and this is shifted the number which are give after the "<<" this expression in binary number

    cout<<(4>>1)<<endl;// this is bitwise right shift operator and this is shifted the binary number which are given after the expression">>" this is shifted right

    return 0;
}