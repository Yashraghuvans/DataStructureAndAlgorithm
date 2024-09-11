#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candy = candies[0]; 

        vector<bool> result(candies.size());

        for (int i = 0; i < candies.size(); i++) {
            max_candy = std::max(max_candy, candies[i]); 
            result[i] = candies[i] + extraCandies >= max_candy;
        }

        return result;
    }
};

int main() {
    vector<int> candies;
    Solution s;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        candies.push_back(i); 
    }

    int extraCandies;
    cin >> extraCandies;

    vector<bool> result = s.kidsWithCandies(candies, extraCandies);

   vector<bool>ans;
   for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
  

    return 0;
}
