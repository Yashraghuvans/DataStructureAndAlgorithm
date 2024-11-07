#include <iostream>

using namespace std;

void findTwoMissingNumbers(int arr[], int n) {
    // Calculate the XOR of all numbers from 1 to n and all elements in the array
    int xor1 = 1;
    for (int i = 2; i <= n + 2; i++) {
        xor1 ^= i;
    }
    for (int i = 0; i < n; i++) {
        xor1 ^= arr[i];
    }

    // Get the rightmost set bit in xor1
    int set_bit_no = xor1 & ~(xor1 - 1);

    // Divide elements of arr[] and numbers from 1 to n + 2 into two sets
    // based on the value of the rightmost set bit
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] & set_bit_no) {
            x ^= arr[i];
        } else {
            y ^= arr[i];
        }
    }
    for (int i = 1; i <= n + 2; i++) {
        if (i & set_bit_no) {
            x ^= i;
        } else {
            y ^= i;
        }
    }

    cout << "The two missing numbers are " << x << " and " << y << endl;
}

int main() {
    int arr[] = {1, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    findTwoMissingNumbers(arr, n);

    return 0;
}
