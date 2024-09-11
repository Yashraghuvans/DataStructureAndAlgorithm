#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=1;i<n;i++)
            if(nums[i-1]>nums[i])
                cnt++;
            
            if(nums[n-1]>nums[0])
                cnt++;
            
        
        return cnt<=1;
        
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
  if(s.check(nums))return true;
  else return false;
}

