#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int size = n/2;
        int cnt=0;
        int element=0,ans=0;

        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt=1;
                element=nums[i];
            }
            else if(element==nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }

        }
        
        return element;
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

  s.majorityElement(&nums);
  
  for(int i=0;i<n;i++){
    cout<<nums[i];
  }
  return 0;
}
