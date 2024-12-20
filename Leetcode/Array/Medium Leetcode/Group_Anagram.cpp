#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> mp;
        
        for(auto x: strs){
            string word = x;
            sort(word.begin(), word.end());
            mp[word].push_back(x);
        }
        
        vector<vector<string>> ans;
        for(auto x: mp){
            ans.push_back(x.second);
        }
        return ans;
        
    }
};

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution obj;
    vector<vector<string>> result = obj.groupAnagrams(strs);

    for (auto group : result) {
        for (auto word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}
