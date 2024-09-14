#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lb(vector<int>& nums, int n, int x) {
        int low=0;int high=n-1;int ans=n;

        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=x){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int ub(vector<int>& nums, int n, int x) {
        int low=0;int high=n-1;int ans=n;

        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>x){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=lb(nums,n,target);
        if(low==n || nums[low] != target)return {-1,-1};
        return{low,ub(nums,n,target)-1};
    }
};
int solve(int n, int key, vector < int > & v) {
  int start = 0;
  int end = n - 1;
  int res = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (v[mid] == key) {
      res = mid;
      start = mid + 1;

    } else if (key < v[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return res;
}

int main() {
  int n = 7;
  int key = 13;
  vector < int > v = {3,4,13,13,13,20,40};
  
  cout << "Index of the first occurrence of " << key << " is: ";
  cout << solve(n, key, v) << "\n";
  

  return 0;
}