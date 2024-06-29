#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
        int n=nums.size();
        for(int i=1;i<n;i++){
                if(nums[i]!=nums[i-1]){
                    nums[j]=nums[i];
                    j++;
                }
        }
        return j;
    }
};

int main(){
  int n;
  cin>>n;
  vector<int>nums;
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  Solution s;
  s.removeDuplicates(nums);
  return 0;
}
