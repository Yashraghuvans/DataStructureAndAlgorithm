#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //brute solution
    vector<int> twoSum1(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
    //better solution
     vector<int> twoSum2(vector<int>& nums, int target) {
        vector<int>ans;
        map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int a =nums[i];
            int need=target-a;
            if(mpp.find(need)!=mpp.end()){
                ans.push_back(mpp[need]);
                ans.push_back(i);
            }
            mpp[a]=i;
        }
        return ans;
    }
};



int main() {
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> indices1 = s.twoSum1(nums, target);
    vector<int> indices2 = s.twoSum2(nums, target);

    cout << "Indices: [" << indices1[0] << ", " << indices1[1] << "]" << endl;
    cout << "Indices: [" << indices2[0] << ", " << indices2[1] << "]" << endl;

    return 0;
}


