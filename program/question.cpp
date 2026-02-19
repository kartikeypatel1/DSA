//  Write a C++ program to get a number from the user and print whether 
// it's positive, negative or zero.


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number:"<<endl;
//     cin>>n;
//     if(n>0){
//         cout<<"Number is positive"<<endl;
//     }else if(n<0){
//         cout<<"Number is negative"<<endl;
//     }else{
//         cout<<"number is zero"<<endl;
//     }
// }


//  : Write a C++ program that takes a year from the user and print whether 
// that year is a leap year or not.

// #include<iostream>
// using namespace std;
// int main(){
//     int year;
//     cout<<"Enter the year:";
//     cin>>year;
//     if((year%4==0 && year%100!=0)||year%400==0){
//         cout<<"Year is leap ";
//     }else{
//         cout<<"Not a leap year";
//     }
// }


//  For any 3 digit number check whether it’s an Armstrong number or not. 
// Armstrong number is a number that is equal to the sum of cubes of its digits. 
// Eg : 371 is an armstrong number. 
// 3*3*3 + 7*7*7 + 1*1*1 = 371


// #include<iostream>
// using namespace std;
// int main(){
//     int n,sum=0,r;
//     cout<<"Enter the three digit number:";
//     cin>>n;
//     int temp=n;
//     while(n>0){
//         r=n%10;
//         sum=sum+r*r*r;
//         n=n/10;
//     }
//     if(temp==sum){
//         cout<<temp<<" "<<"is a palindrome number";
//     }else{
//         cout<<temp<<" "<<"is not a palindrome number";
//     }
// }


//write a program to find the sum of odd digits of  the number
// #include<iostream>
// using namespace std;
// int main(){
//     int n ,r,sum=0;
//     cin>>n;
//     while(n>0){
//         r=n%10;
//         if(r%2!=0){
//             sum+=r;
//         }
//         n=n/10;
//     }
//     cout<<"The sum of Odd Digits is:"<<sum<<endl;
// }

//write a program to print the reverse of the number'
// #include<iostream>
// using namespace std;
// int main(){
//     int n,rev=0,r;
//     cout<<"Enter the number:";
//     cin>>n;
    
//     while(n>0){
//         r=n%10;
//         rev=rev*10+r;
//         n=n/10;
//     }
//     cout<<"Reverse of the number is :"<<rev;
// }

//write program where user can keep entering numbers till they enter a multiple of 10;
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     do{
//         cout<<"Enter a number:";
//         cin>>n;
//         if(n%10==0){
//             break;
//         }
//         cout<<"You entered"<<n<<endl;
//     }while(true);
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    do{
        cout<<"Enter a number:";
        cin>>n;
        if(n%10==0){
            continue;
        }
        cout<<"You entered"<<n<<endl;
    }while(true);
}
