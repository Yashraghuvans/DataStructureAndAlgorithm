#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_indices;
        vector<int> result;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (num_indices.find(complement) != num_indices.end()) {
                result.push_back(num_indices[complement]);
                result.push_back(i);
                return result;
            }
            num_indices[nums[i]] = i;
        }

        return result;
    }
};

int main(){
    
  return 0;
}
