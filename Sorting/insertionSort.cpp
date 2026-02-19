// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the array:";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the element of the array";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j>0;j--){
//             if(arr[j]<arr[j-1]){
//                 swap(arr[j],arr[j-1]);
//             }else{
//                 break;
//             }
//         }
//     }
//     cout<<"Sorted array is:\n";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    
// }


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Proper insertion sort (descending)
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Shift all elements smaller than key
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}


