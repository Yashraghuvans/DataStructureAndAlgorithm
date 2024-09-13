#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
         sort(arr.begin(), arr.end());
        int low = 0, high = arr.size() - 1;
        int floorval = -1, ceilval = -1;
        while (low <= high) {
          int mid = (low + high) / 2;
          if (arr[mid] == x) {
             return {x, x};
          }
          else if (arr[mid] < x) {
            floorval = arr[mid];
            low = mid + 1;
          } else {
            ceilval = arr[mid];
            high = mid - 1;
          }
        }
        return {floorval, ceilval};
    }
};
int main(){
    Solution s;
    return 0;
}