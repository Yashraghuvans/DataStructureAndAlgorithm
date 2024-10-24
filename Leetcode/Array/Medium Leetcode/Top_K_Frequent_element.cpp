#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> fmap;
        
        for (int n : nums) {
            fmap[n]++;
        }

        priority_queue<pair<int, int>> priority_queue;
        for (const auto& i : fmap) {
            priority_queue.push({i.second, i.first});
        }

        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(priority_queue.top().second);
            priority_queue.pop();
        }
        return ans;
    }
};

int main(){
    Solution s;
    return 0;
}
