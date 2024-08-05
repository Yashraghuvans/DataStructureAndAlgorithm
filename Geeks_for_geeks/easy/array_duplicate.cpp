#include <bits/stdc++.h>
using namespace std;

class Solution{
 public:
    vector<int> duplicates(vector<long long> arr) {
        map<int,int>mp;
        for (int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<int>s;
         for (auto p:mp){
            if (p.second>1){
                s.push_back(p.first);
            }
        }
        if (s.size()==0 ){
            return {-1};
        }
        else{
            return s;
        }
    }
};

int main()
{
  return 0;
}
