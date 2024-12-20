#include <iostream>
#include <vector>

using namespace std;
int getMax(vector<int>& arr, int n) {
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}



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
