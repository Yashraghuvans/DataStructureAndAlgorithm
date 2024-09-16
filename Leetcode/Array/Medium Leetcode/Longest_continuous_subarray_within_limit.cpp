#include <bits/stdc++.h>
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
        auto it = s.find(nums[i]);
        s.erase(it);
        i++;
      }
      maxlen=max(maxlen,(int)s.size());
      j++;
    }
    return maxlen;
  }
   int longestSubarray2(vector<int>& nums, int limit) {
        priority_queue<pair<int,int>>maxHeap;
        int n=nums.size();
        int j=0,i=0,maxlen=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minHeap;
        while(j<n){
            maxHeap.push({nums[j],j});
            minHeap.push({nums[j],j});
            int diff=maxHeap.top().first-minHeap.top().first;
            while(i<j && diff>limit){
                i=min(maxHeap.top().second,minHeap.top().second)+1;
                while(maxHeap.top().second<i)maxHeap.pop();
                while(minHeap.top().second<i)minHeap.pop();
                diff=maxHeap.top().first-minHeap.top().first;
            }
            maxlen=max(maxlen,j-i+1);
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
  
  int ans2=s.longestSubarray2(nums,limit);
  cout<<ans1<<endl;
  return 0;
}
