#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int>next(n,0);
        vector<bool>ans;

        for(int i=1;i<n;i++){
            next[i]=next[i-1];
            if(nums[i]%2 == nums[i-1]%2){
                next[i]++;
            }
        }

        for(auto& q : queries){
            int x=q[0],y=q[1];
            int cnt=next[y]-(x>0 ? next[x] : 0);
             if (cnt && x != y)
                ans.push_back(false);
            else
                ans.push_back(true);
        }
        return ans;
    }
};
int main(){
  return 0;
}
