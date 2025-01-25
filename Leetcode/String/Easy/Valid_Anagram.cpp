#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> counter;
        for (char ch : s) {
            counter[ch] = counter[ch] + 1;
        }
        for (char ch : t) {
            if (counter.find(ch) == counter.end() || counter[ch] == 0) {
                return false;
            }
            counter[ch] = counter[ch] - 1;
        }
        return true;
    }
    bool isAnagram(string s,string t){
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)return true;
        return false;
    }
};
int main(){
    Solution s;
    return 0;
}
