#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> cnt(n + 1, 0);
        cnt[0] = 1;
        int ans = 0, t = 0;
        for (int v : nums) {
            t += v & 1;
            if (t - k >= 0) {
                ans += cnt[t - k];
            }
            cnt[t]++;
        }
        return ans;
    }
};

int main(){
  int n;
  int k;
  cin>>n;
  cin>>k;
  vector<int>nums;

  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  Solution s;
  int ans=s.numberOfSubarrays(nums,k);

  cout<<ans<<endl;
  return 0;
}
