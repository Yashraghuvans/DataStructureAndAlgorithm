#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int sumByD(vector<int>& arr, int div) {
        int n = arr.size(); 
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += ceil((double)(arr[i]) / (double)(div));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& arr, int limit) {
        int n = arr.size();
        if (n > limit)
            return -1;
        int low = 1, high = *max_element(arr.begin(), arr.end());

        
        while (low <= high) {
            int mid = (low + high) / 2;
            if (sumByD(arr, mid) <= limit) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
int main(){
    Solution s;
    return 0;
}