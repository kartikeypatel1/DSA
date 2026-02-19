#include<iostream>
#include<math.h>
using namespace std;


// this is function for the return the 2 number multiplication
// int prod(int a, int b){
//     return a*b;
// }

//this function is use for the check even or odd number
// bool evenOdd(int n){
//     if(n%2==0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }


//this is use for the find the factorial of the number
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
//     int a;
//     cout<<"Enter the two number:";
//     cin>>a;
//     int num=factorial(a);
//     cout<<"Factorial of the number is "<<num;
    
// }

//this function is use for the checking the prime number

// bool prime(int n){
//     if(n==1){
//         return false;
//     }
//     else{
//         for(int i=2;i<=n/2;i++){
//             if(n%i==0){
//                 return false;
//             }
//         }
//         return true;
//     }
// }
// int main(){
//     int a;
//     cout<<"enter a number:";
//     cin>>a;
//     if(prime(a)){
//         cout<<"Number is prime:"<<a;
//     }
//     else{
//         cout<<"Number is not prime";
//     }

// }

//this is use for the finding the binomial coefficient fir given n &r
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
//     int n,r;
//     cout<<"Enter the value of N & R respectively:";
//     cin>>n>>r;
//     int binomial_coefficient=factorial(n)/(factorial(r)*factorial(n-r));
//     cout<<"Binomial coefficient of this is:"<<binomial_coefficient;
// }



//this is use for the print the number of prime number between 2 to n


// bool prime(int n){
//     if(n==1){
//         return false;
//     }
//     else{
//         for(int i=2;i<=n/2;i++){
//             if(n%i==0){
//                 return false;
//             }
//         }
//         return true;
//     }
// }
// void allPrime(int n){
//     for(int i=2;i<=n;i++){
//         if(prime(i)){
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl;
// }

// int main(){
//     int num;
//     cout<<"Enter the number for finding the prime number";
//     cin>>num;
//     allPrime(num);

// }

// Write a function to check if a number is a palindrome in C++.

// bool palindrome(int n){
//     int rev=0,rem;
//     int num=n;
//     while(n>0){
//         rem=n%10;
//         rev=rev*10+rem;
//         n=n/10;
//     }
//     if(num==rev){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter a number";
//     cin>>n;
//     if(palindrome(n)){
//         cout<<"Number is palindrome";
//     }
//     else{
//         cout<<"Number is not palindrome";
//     }
// }

//Write a function to calculate the sum of digits of a number. 
// int sumOfDigit(int n){
//     int sum=0,rem;
//     while(n>0){
//         rem=n%10;
//         sum=sum+rem;
//         n=n/10;
//     }
// return sum;
// }
// int main(){
//     int num;
//     cout<<"Enter a number:";
//     cin>>num;
//     cout<<"Sum of the digits of number "<<num<<" is: "<<sumOfDigit(num);
// }

// Write a function which takes 2 numbers as parameters (a & b) and 
//outputs : a^2 + b^2 + 2*ab.

// int equation(int a, int b){
//     return (pow(a,2)+pow(b,2)+2*a*b);
// }
// int main()
// {
//     int m,n;
//     cout<<"Enter the two number:";
//     cin>>m>>n;
//     cout<<"the solution of the equation is: "<<equation(m,n);
// }

// Write a function that accepts a character (ch) as parameters & returns 
// the character that occurs after ch in the English alphabet.

// char nextCharacter(char ch) {
//     // If ch is 'z' or 'Z', wrap around to 'a' or 'A'
//     if (ch == 'z') return 'a';
//     if (ch == 'Z') return 'A';
    
//     // Return the next character
//     return ch + 1;
// }

// int main() {
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;

//     char result = nextCharacter(ch);
//     cout << "Next character: " << result << endl;

//     return 0;
// }




void printLargest(int a, int b, int c) {
    int largest;

    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    cout << "The largest number is: " << largest << endl;
}

int main() {
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    printLargest(x, y, z);

    return 0;
}
