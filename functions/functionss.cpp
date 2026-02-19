// #include<iostream>
// using namespace std;

// int Add(int a, int b){
//     return a+b;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<Add(a,b);
// }


// #include<iostream>
// using  namespace std;
// int maxNumber(int a,int b,int c){
//     if(a>=b&&a>=c){
//         return a;
//     }
//     else if(b>=a&&b>=c){
//         return b;
//     }
//     return c;
// }
// int main(){
//     int a ,b,c;
//     cin>>a>>b>>c;
//     cout<<maxNumber(a,b,c);
// }

// #include<iostream>
// using namespace std;
// void printCount(int n){
//     int i=1;
//     while(i<=n){
//         cout<<i<<" ";
//         i++;
//     }
// }
// int main(){
//     int a;
//     cin>>a;
//     printCount(a);
// }


// #include<iostream> 
// using namespace std;
// int EvenSum(int n){
//     int sum=0;
//     for (int i=0;i<=n;i=i+2){
        
//             sum+=i;
        
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<EvenSum(n);
// }

//write a function for the find the area of the circle

// #include<iostream>
// using namespace std;
// float areaOfCircle(int r){
//     return 3.14*r*r;
// }
// int main(){
//     float radius;
//     cin>>radius;
//     cout<<areaOfCircle(radius);
// }

// #include<iostream>
// using namespace std;
// bool EvenOdd(int n){
//     if(n%2==0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     if(EvenOdd(n)){
//         cout<<n<<" is Even .";
//     }
//     else{
//         cout<<"number is odd";
//     }
// }


// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     if(n==1||n==0){
//         return fact;

//     }
//     else{
//         while(n>1){
//             fact=fact*n;
//             n--;
//         }
//         return fact;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<factorial(n);
// }


// #include<iostream>
// using namespace std;
// bool isPrime(int n){
//     for(int i=2;i<n/2;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int n;
//     cin>>n;
//     if(isPrime(n)){
//         cout<<n<<" is prime number";
//     }
//     else{
//         cout<<"number is not prime";
//     }
// }


// #include<iostream> 
// using namespace std;
// void printNumber(int n){
//     for(int i=1;i<=n;i++){
//         cout<<i<<" ";
//     }

// }
// int main(){
//     int n;
//     cin>>n;
//     printNumber(n);
// }

// #include<iostream>
// using namespace std;
// int reverseNumber(int n){
//     int sum =0;
//     while(n>0){
//         int rem=n%10;
//         sum=sum*10+rem;
//         n=n/10;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<reverseNumber(n);
// }


#include<iostream>
using namespace std;
#define INT32_MIN (-2147483647 - 1)
int main(){
    int arr[6]={2,34,6,54,2,5};
    int ans=INT32_MIN;
    for(int i=0;i<6;i++){
        if(ans<arr[i]){
            ans=arr[i];
        }
}
 cout<<ans;
}