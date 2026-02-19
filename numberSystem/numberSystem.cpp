#include<iostream>
#include<math.h>
using namespace std;
int decimalToBinary(int n){

    //division method
    int sum =0;
    int i=0;
    while(n>0){
        int bit=n%2;
        
        sum=bit*pow(10,i++) +sum;
        n=n/2;
    }
    return sum;
}
int decimalToBinary2(int n) {
    int sum = 0;
    int place = 1;

    while (n > 0) {
        int bit = n & 1;
        sum += bit * place;
        place *= 10;
        n = n >> 1;
    }

    return sum;
}

int binaryToDecimal(int n){
    int sum=0;
    int i=0;
    while(n>0){
        int bit =n%10;
        sum=bit*pow(2,i++)+ sum;
        n=n/10;
    }
    return sum;
}
int main(){
    cout<<decimalToBinary(10)<<endl;
    cout<<decimalToBinary2(13)<<endl;
    cout<<binaryToDecimal(1001);
    
}