#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum=prices[0];
        int maximum=0;

        for(int i=0;i<prices.size();i++){
            int profit=prices[i]-minimum;
            maximum=max(maximum,profit);
            minimum=min(minimum,prices[i]);
        }
        return maximum;
    }
};

int main() {
    vector<int> arr = {7, 1, 5, 3, 6, 4}; 

    Solution solution;
    int maxProfit = solution.maximumProfit(arr);

    cout << "Maximum profit: " << maxProfit << endl;

    return 0;
}

  
