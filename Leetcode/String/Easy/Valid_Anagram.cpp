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
    bool isAnagram1(string s,string t){
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)return true;
        return false;
    }
    bool isAnagram2(string s,string t){
        vector<int>cnt(26,0);
        for(char &ch:s){
            cnt[ch-'a']++;
        }
        for(char &ch:)t{
            cnt[ch-'a']--;
        }
        for(int i=0;i<s.size();i++){
            if(cnt[i]!=0){
                return false;
            }
        }
        return true;
    }
};
int main(){
    Solution s;
    return 0;
}
