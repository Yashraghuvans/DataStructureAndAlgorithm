#include<bits/stdc++.h>
using namespace std;


class Solution{
  public:
  vector<int> rotateArray(vector<int>arr, int k) {
    int size=arr.size();
    vector<int>ans(size);
    for(int i=0;i<size;i++){
        ans[i]=arr[(i+k)%size];
    }
    return ans;
    
  }
};
int main(){
  return 0;
}
