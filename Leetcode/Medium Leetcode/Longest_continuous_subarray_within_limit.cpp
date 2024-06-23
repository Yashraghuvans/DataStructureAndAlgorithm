#inlcude <bits/stdc++.h>
using namespace std;

class Solution{
  public:
  int longestSubarray1(vector<int>nums,int limit){
    int i=0,j=0,maxlen=0;
    multiset<int>s;
    int n=nums.size();
    while(j<n){
      s.insert(nums[j]);
      int diff=*s.rbegin() - *s.begin();
      while(i<j && diff>limit){
        auto it = s.find(nums[j]);
        s.erase(it);
        i++;
      }
      maxlen=max(maxlen,(int)s.size());
      j++;
    }
    return maxlen;
  }
  
};

int main(){
  int n;
  int limit;
  vector<int>nums;
  cin>>n>>limit;
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  Solution s;

  int ans1=s.longestSubarray1(nums,limit);
  cout<<ans1<<endl;
  return 0;
}
