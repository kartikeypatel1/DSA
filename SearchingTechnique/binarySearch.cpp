#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int element;
    cin >> element;

    int left = 0;
    int right = n - 1;
    bool found = false;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == element) {
            found = true;
            break;
        } else if (arr[mid] > element) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    if (found) {
        cout << "ELEMENT FOUND";
    } else {
        cout << "ELEMENT NOT FOUND";
    }

    return 0;
}
