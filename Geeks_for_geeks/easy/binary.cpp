#include<bits/stdc++.h>
using namespace std;
int search(vector<int> &nums, int target) {
   int n=nums.size();
   int beg=0,end=n-1,mid=(beg+end)/2,i=1;

    while(beg<=end){
        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]>target){
            end=mid-1;
        }
        else if(nums[mid]<target){
            beg=mid+1;
        }
        mid=(beg+end)/2;
       
       
    }

    return -1;
}
int main(){
  return 0;
}
