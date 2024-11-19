#include <iostream>
#include <vector>

using namespace std;

void findMissingNumbers(vector<int>& arr, int n) {
    int i = 0;
    while (i < n) {
        int correctIndex = arr[i] - 1;
        if (arr[i] != arr[correctIndex]) {
            swap(arr[i], arr[correctIndex]);
        } else {
            i++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            cout << i + 1 << " ";
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 4, 5, 8};
    int n = 8;

    findMissingNumbers(arr, n);

    return 0;
}
