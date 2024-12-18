#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int n = arr.size();

    heapSort(arr);

    cout << "Sorted array is \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";

    vector<int> arr2 = {4, 10, 3, 5, 1, 2};
    n = arr2.size();

    heapSort(arr2);

    cout << "Sorted array is \n";
    for (int i = 0; i < n; ++i)
        cout << arr2[i] << " ";
    cout << "\n";

    return 0;
}
