#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //brute solution
    vector<int> twoSum(vector<int>& nums, int target) {
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
};

int main(){
  vector<int>arr;
  int n;
  Solution s;

  cin>>n;

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  vector<int> ans;
  
  return 0;
}
