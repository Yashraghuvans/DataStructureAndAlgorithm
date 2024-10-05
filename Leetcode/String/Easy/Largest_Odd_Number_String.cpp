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
    string largestOddNumber(string num) {
        int n=num.size();
        string ans="";
        int i;
        for(i=n-1; i>=0; i--){
            if((num[i]-'0')%2 != 0)
            break;
        }
        return num.substr(0,i+1);
    }
};
int main(){
  return 0;
}
