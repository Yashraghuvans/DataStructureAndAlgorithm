#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long int floorSqrt(long long int n) {
    // base case
    if (n == 0 || n == 1)
        return n;

    long long int start = 1, end = n, ans;

    // binary search to find square root of a number
    while (start <= end) {
        long long mid = (start + end) / 2;

        // check if mid*mid == n
        if (mid * mid == n)
            return mid;

        // if mid*mid < n, then iterate on the upper half
        if (mid * mid < n) {
            start = mid + 1;
            ans = mid;
        }
        // else, iterate for the lower half
        else
            end = mid - 1;
    }
    return ans;
    }
};
int main(){
    Solution obj;
    long long int n = 81;
    cout << "Square root of " << n << " is " << obj.floorSqrt(n) << endl;
    return 0;
}