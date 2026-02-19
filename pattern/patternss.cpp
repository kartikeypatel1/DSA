// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number for the pattern:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

// output:
// 1 1 1 1 
// 2 2 2 2 
// 3 3 3 3 
// 4 4 4 4




// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// output:
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number for the pattern";
//     cin>>n;
//     for(int i=n;i>0;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// output:
// * * * * 
// * * *
// * *
// *


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// output:
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     char ch='A';
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
// }
// outout:
// A 
// B C 
// D E F 
// G H I J 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<"* ";
//         for(int j=1;j<=n-1;j++){
//             if(i==1||i==n){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }   
//         }
//         cout<<"* "<<endl;
//     }
// }
// output:
// * * * * * 
// *       * 
// *       * 
// * * * * * 


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//          for(int j=1;j<=n-i;j++){
//             cout<<" ";
//          }
//          for(int j=1;j<=i;j++){
//             cout<<"*";
//          }
//          cout<<endl;
//     }
// }
// output:
//    *
//   **
//  ***
// ****

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     int num=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
// }

// output:
// 1
// 23
// 456
// 78910

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
     
//         cout<<endl;
//     }
//        for(int j=n;j>=1;j--){
//         for(int i=1;i<=n-j ;i++){
//             cout<<" ";
//         }
//         for(int i=1;i<=2*j-1;i++){
//             cout<<"*";
//         }
//         cout<<endl;
//         }
// }

// output:


//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=2*(n-i);j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=2*(n-i);j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// output:
// Enter the number:4
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

//Hollow Full pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int k=0;
//         for(int j=0;j<((2*n)-1);j++){
//             if(j<n-i-1){
//                 cout<<" ";
//             }else if(k<2*i+1){
//                 if(k==0||k==2*i||i==n-1){
//                    cout<<"*";
//                 }else{
//                     cout<<" ";
//                 }
//                 k++;
//             }else{
//                 cout<<" ";
//             }
                
//         }
//         cout<<endl;
//     }
// }



//full pyramid

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++){
//             cout<<"* ";
//         }
        
//         cout<<endl;
//     }
// }

//inverted full pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//Hollow half diamond shape
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*i+1;j++){
//             if(j==0){
//                 cout<<"*";
//             }else if(j==2*i){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
//hollow solid  diamond 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"* ";
//         }
//         for(int j=0;j<2*i+1;j++){
//             cout<<"  ";
//         }
//         for(int j=0;j<n-i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"* ";
//         }
//         for(int j=0;j<2*n-2*i-1;j++){
//             cout<<"  ";
//         }
//         for(int j=0;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
// }
// output:
// * * * * *   * * * * * 
// * * * *       * * * *
// * * *           * * *
// * *               * *
// *                   *
// *                   *
// * *               * *
// * * *           * * *
// * * * *       * * * * 
// * * * * *   * * * * *

//fancy pattern
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<i+1;
//             if(j!=i){
//                 cout<<"*"; 
//             }
//         }
//          cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<n-i;
//             if(j!=n-i-1){
//                 cout<<"*";
//             }
//         }
//          cout<<endl;
//     }
   
// }

// output:
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// 5*5*5*5*5
// 4*4*4*4
// 3*3*3
// 2*2
// 1


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int j;
//         for(int j=0;j<=i;j++){
//             int ans=j;
//             char ch=ans+'A';
//             cout<<ch;
//         }
        
//         for(int j=i; j>=1;j--){
//             int ans=j-1;
//             char ch=ans+'A';
//             cout<<ch;
//         }
//         cout<<endl;
//     }

    
// }

// output:
// A
// ABA
// ABCBA
// ABCDCBA


// #include<iostream>

// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             if(j==0||j==i||i==n-1)
//               cout<<j+1<<" ";
//             else
//             cout<<"  ";
//         }
//         cout<<endl;
//     }
// }
// output:
// 1 
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<=n;j++){
//             if(j==i+1||j==n||i==0){
//                 cout<<j<<" ";
//             }
//             else{
//                 cout<<"  ";
//             }

//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int k=n;
//     for(int i=0;i<n;i++){
//         int c=1;
//         for (int j=0;j<k;j++){
//             if(j<n-i-1){
//             cout<<" ";
//             }
//             else if(j<=n-1){
//                 cout<<c;
//                 c++;
//             }else if(j==n){
//                 c=c-2;
//                 cout<<c;
//                 c--;
//             }
//             else{
//                 cout<<c--;
//             }

//         }
//         k++;
//         cout<<endl;
//     }
// }
// output:
//     1
//    121
//   12321
//  1234321
// 123454321

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int start_num_index=8-i;
//         int num=i+1;
//         int count_num=num;
//         for(int j=0;j<17;j++){
//             if(j==start_num_index && count_num>0){
//                 cout<<num;
//                 start_num_index+=2;
//                 count_num--;
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
// }
// output:
// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int c=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<c<<" ";
//             c++;
//             if(j<i){
//                 cout<<"* ";
//             }
//         }
//         cout<<endl;
//     }
//     int start=c-n;
//     for(int i=0;i<n;i++){
//         int k=start;
//         for(int j=0;j<n-i;j++){
//             cout<<k<<" ";
//             k++;
//             if(j<n-i-1){
//                 cout<<"* ";
//             }
//         }
//         start=start-(n-i-1);
//         cout<<endl;

// }
// }
// output:
// 1 
// 2 * 3
// 4 * 5 * 6
// 7 * 8 * 9 * 10
// 11 * 12 * 13 * 14 * 15
// 11 * 12 * 13 * 14 * 15
// 7 * 8 * 9 * 10
// 4 * 5 * 6
// 2 * 3
// 1


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int start =1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<start<<" ";
//             start++;
//         }
//         cout<<endl;
//     }

// }
// output:
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21

//PASCAL TRIANGLE
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
//         int c=1;
//         for(int j=1;j<=i;j++){
//             cout<<c<<" ";
//             c=c*(i-j)/j;
//         }
//         cout<<endl;
//     }
// }