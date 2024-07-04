#inlcude <bits/stdc++.h>
using namespace std;

class Solution{
    void ans1(vector<int>& nums) {
      //brute force approch
        vector<int>temp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }
        }
        for(int i=0;i<temp.size();i++){
            nums[i]=temp[i];
        }
        int n=temp.size();
        for(int i=n;i<nums.size();i++){
            nums[i]=0;
        }

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
  //brute force
  s.ans1(nums);
  //optimised approch
  s.ans2(nums);
  //optimal approch
  s.ans3(nums);
  
  return 0;
}
