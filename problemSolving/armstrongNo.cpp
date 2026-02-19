#include <bits/stdc++.h>
using namespace std;

int digitCount(int n) {
    int counter = 0;
    while (n) {
        counter++;
        n /= 10;
    }
    return counter;
}

bool armstrong(int num) {
    int rem, sum = 0, original = num;
    int digits = digitCount(num);  // ✅ calculate once
    
    while (num) {
        rem = num % 10;
        sum += pow(rem, digits);   // ✅ use fixed digits count
        num /= 10;
    }
    return (original == sum);
}

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    
    if (armstrong(number)) {
        cout << "Yes, Armstrong number";
    } else {
        cout << "No, not an Armstrong number";
    }
}
