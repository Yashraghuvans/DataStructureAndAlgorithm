#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int m=s.size();
        int n=spaces.size();

        string result;
        int first=0;
        int second=0;

        while(first<m){
            if(second<n && first==spaces[second]){
                result.push_back(' ');
                second++;
            }
            result.push_back(s[first]);
            first++;
        }
        return result;
    }
};
int main(){
    return 0;
}