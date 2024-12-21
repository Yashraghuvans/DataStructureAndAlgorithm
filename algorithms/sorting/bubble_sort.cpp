#include <iostream>

using namespace std;



int main() {
    int arr = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: \n";
    Solution().printArray(arr, n);

    Solution().bubbleSort(arr, n);

    cout << "Sorted array: \n";
    Solution().printArray(arr, n);

    return 0;
}
