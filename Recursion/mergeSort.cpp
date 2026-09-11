#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int start, int end) {
    int mid = start + (end - start) / 2;
    
    int n1 = mid - start + 1;
    int n2 = end - mid;

    vector<int> left(n1);
    vector<int> right(n2);

    for (int i = 0; i < n1; i++) {
        left[i] = arr[start + i];
    }
    for (int i = 0; i < n2; i++) {
        right[i] = arr[mid + 1 + i];
    }

    int index1 = 0;
    int index2 = 0;
    int mainArrayIndex = start;

    while (index1 < n1 && index2 < n2) {
        if (left[index1] <= right[index2]) {
            arr[mainArrayIndex++] = left[index1++];
        } else {
            arr[mainArrayIndex++] = right[index2++];
        }
    }

    while (index1 < n1) {
        arr[mainArrayIndex++] = left[index1++];
    }

    while (index2 < n2) {
        arr[mainArrayIndex++] = right[index2++];
    }
}

void mergeSort(vector<int>& arr, int start, int end) {
    if (start >= end) {
        return;
    }
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, end);
}

int main() {
    vector<int> arr = {12, 43, 2, 46, 3, 2, 654, 4, 3, 3, 2, 2};
    int n = arr.size() - 1;

    mergeSort(arr, 0, n);

    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}