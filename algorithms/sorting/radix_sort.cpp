#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = arr.size();

    radixsort(arr, n);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
