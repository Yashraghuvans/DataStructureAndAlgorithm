#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;
    }
    int singleNonDuplicate(vector<int> &nums){
        int n=nums.size();
        int low=0;int high=n-1;
        while(low<high){
            int mid=low+(high-low);
            if((mid%2==1) && (nums[mid]==nums[mid-1])||(mid%2==0) && (nums[mid]==nums[mid+1])){
                low=mid+1;
            }else{
                high=mid;
            }
        }
        return nums[low];
    }
};
int main(){
    Solution s;
    return 0;
}