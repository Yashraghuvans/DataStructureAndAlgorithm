#include <bits/stdc++.h>
#include <vector>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        set<vector<int>> uniqueTriplets;

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1, right = n - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    uniqueTriplets.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        for (auto triplet : uniqueTriplets) {
            ans.push_back(triplet);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = s.threeSum(nums);

    cout << "Triplets that sum to zero are:" << endl;
    for (const auto& triplet : result) {
        cout << "[";
    for (int i = 0; i < triplet.size(); i++) {
        cout << triplet[i];
        if (i < triplet.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

    return 0;
}
