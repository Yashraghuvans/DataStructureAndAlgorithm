#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        vector<int> arr(128, 0);
        int l = 0;
        for (int r = 0; r < s.length(); r++) {
            int curr = s[r];
            while (arr[curr] > 0) {
                arr[s[l]]--;
                l++;
            }
            arr[curr]++;
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};
int main(){
  Solution s;
  return 0;
}
