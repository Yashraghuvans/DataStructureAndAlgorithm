#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        string ans;
        for (int i = 0; i < num.length(); i++) {
            if(num.back() % 2 != 0){
                return num;
            }
            if (num[i] % 2 != 0) {
                ans.push_back(num[i]);
            }
        }

        
        if (ans.empty()) {
            return "";
        }

        return ans;
    }
};
int main(){
  return 0;
}
