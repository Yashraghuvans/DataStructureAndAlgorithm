#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

  
    int missingNumber(int n, vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int sum=(n*(n+1))/2;
        int s=0;
        for(int i=0;i<n-1;i++){
            s+=arr[i];
        }
         return(sum-s);
        
    }
};
