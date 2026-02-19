// sum of number from 1 to N

#include<iostream>
using namespace std;
int sumNumber(int N){
    int sum=0;
    for(int i=1;i<=N;i++){
        sum+=i;
    }
    return sum;

}
int main(){
    cout<<sumNumber(10)<<endl;
    cout<<sumNumber(90)<<endl;
}