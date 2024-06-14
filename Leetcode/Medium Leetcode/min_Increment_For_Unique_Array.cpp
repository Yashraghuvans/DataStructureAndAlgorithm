#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= nums[i - 1]) {
                ans += nums[i - 1] - nums[i] + 1;
                nums[i] = nums[i - 1] + 1;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> nums;
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    Solution s;
    int min_increments = s.minIncrementForUnique(nums);
    cout << "Minimum increments required: " << min_increments << endl;

    return 0;
}
