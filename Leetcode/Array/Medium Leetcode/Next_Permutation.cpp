#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //stl lib
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
    }
    //optimized 
    void nextPermutation1(vector<int>&nums){
        int index=-1;
        int n=nums.size();

        //next prefix
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }

        if(index==-1){
            reverse(nums.begin(),nums.end());
        }

        else{

        //find just min element
        for(int i=n-1;i>=index;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }

        //revers left out array

        reverse(nums.begin()+index+1,nums.end());
        }
    }
};

int main(){
  Solution s;
  return 0;
}
