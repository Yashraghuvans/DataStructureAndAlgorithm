#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        set<vector<int>> uniqueTriplets;

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1, right = n - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {

                    uniqueTriplets.insert({nums[i], nums[left], nums[right]});


                    left++;
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        for (auto triplet : uniqueTriplets) {
            ans.push_back(triplet);
        }
        return ans;
}
vector<vector<int>> threeSum1(vector<int>& nums) {
        
        set<vector<int>>st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]+nums[k]==0 && i!=j && i!=k && j!=k){
                        vector<int>vc={nums[i],nums[j],nums[k]};
                        sort(vc.begin(),vc.end());
                        st.insert(vc);
                    }
                }
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};

int main(){
    Solution s;
  return 0;
}
