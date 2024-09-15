#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //linear search solution (brute force solution)
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
    
    //binary search solution(better solution)
    int search(vector<int>& nums, int target) {
         int n=nums.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target)return mid;
            else if(nums[low]<=nums[mid]){
                if(target>=nums[low] && target <= nums[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(target<=nums[high]&& nums[mid]<=target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};
int main(){
    Solution s;
    return 0;
}