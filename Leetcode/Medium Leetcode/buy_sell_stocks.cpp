#include <bits/stdc++.h> 
using namespace std;

class Solution{
int maximumProfit(vector<int> &arr){
    int mini=arr[0];
    int maxm=0;
    
    for(int i=0;i<arr.size();i++){
      int cost=arr[i]-mini;
      maxm=max(maxm,cost); 
      mini=min(mini,arr[i]);
       
    }
  return maxm;
}
};

  
