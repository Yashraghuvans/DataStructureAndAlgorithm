#include <iostream>
using namespace std;

int findUnique(int arr[], int size) {
    int unique = 0;

    for (int i = 0; i < size; i++) {
        unique ^= arr[i];
    }

    return unique;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int uniqueElement = findUnique(arr, size);
    cout << "The unique element is: " << uniqueElement << endl;

    return 0;
}

