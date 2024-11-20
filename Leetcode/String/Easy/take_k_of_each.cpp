#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int takeCharacters(string s, int k) {
        vector<int> count(3, 0);
        for (char c : s) {
            count[c - 'a']++;
        }
        
        if (*min_element(count.begin(), count.end()) < k) {
            return -1;
        }
        
       
        int res = INT_MAX;
        int l = 0;
        for (int r = 0; r < s.length(); r++) {
            count[s[r] - 'a']--;
            
            while (*min_element(count.begin(), count.end()) < k) {
                count[s[l] - 'a']++;
                l++;
            }
            res = min(res, static_cast<int>(s.length()) - (r - l + 1));
        }
        return res;
    }
};

int main() {
    Solution solution;
    string s;
    int k;

    cout << "Enter the string: ";
    cin >> s;

    cout << "Enter the value of k: ";
    cin >> k;

    int result = solution.takeCharacters(s, k);

    if (result == -1) {
        cout << "It is not possible to remove characters to satisfy the condition." << endl;
    } else {
        cout << "Minimum characters to remove: " << result << endl;
    }

    return 0;
}
