#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<bool> capitalArray(capital.size(), false);
      for (int j = 0; j < k; j++) {
            int index = -1, value = -1;
            for (int i = 0; i < capital.size(); i++) {
                if (capital[i] <= w && !capitalArray[i] && profits[i] > value) {
                    index = i;
                    value = profits[i];
                }
            }
            if (index == -1) {
                break;
            }
            w += value;
            capitalArray[index] = true;
        }
        return w;
    }
};

int main() {
    int k, w;
    vector<int> profits, capital;

    
    cout << "Enter the maximum number of projects (k): ";
    cin >> k;
    cout << "Enter the initial capital (w): ";
    cin >> w;

   
    cout << "Enter project profits and minimum capital (space-separated, one pair per line):\n";
    int n;
    cout << "Enter the number of projects: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int profit, capitalNeeded;
        cin >> profit >> capitalNeeded;
        profits.push_back(profit);
        capital.push_back(capitalNeeded);
    }

    Solution s;
    int maxCapital = s.findMaximizedCapital(k, w, profits, capital);
    cout << "Maximum final capital: " << maxCapital << endl;

    return 0;
}
