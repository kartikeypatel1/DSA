// // array is given as [9,7,3,1,6]
// //round 1-> [1,7,3,9,6] isme phla element sort hai to next round me usse aage se chlayege jaise ki ab  7 se start hoga
// //Round 2-> [1,3,7,9,6] ab isme 1,3 are sorted then we start next element jaise ki ab 7 se start krege
// //round 3->[1,3,6,9,7] ab ye sorted hai till 6 tk ab hm isko start krege 9 se
// //round 4->[1,3,6,7,9] final sorted array we get after that round

// // isme round number is = element in array -1

//  #include<iostream>
//  using namespace std;
//  int main(){
//     int n;
//     cout<<"Enter the size of the array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the values of the array";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int j=0;j<n-1;j++){// ye vala loop hme btata hai kitne round chlege selection round ke 
//         int index=j;
//         for(int k=j+1;k<n;k++){
//             if(arr[k]<arr[index]){
//                 index=k;
//             }
//         }
//         swap(arr[j],arr[index]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//  }


#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[1000];
    cout<<"Enter the size of the array";
    cin>>n;
    cout<<"Enter the values of the array";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int i=n-1;i>0;i--){
        int index=i;
        for(int j=0;j<i-1;j++){
            if(arr[index]<arr[j]){
                index =j;
            }
        }
        swap(arr[index],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}