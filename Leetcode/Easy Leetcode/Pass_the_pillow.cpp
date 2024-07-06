#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int passThePillow(int n, int time) {
        int N=2*n-2, x=time%N;
        return 1+((x<n)?x:N-x);
        
    }
};
int main(){
  int n,time;
  cin>>n;
  cin>>time;
  Solution s;
  int ans=s.passThePillow(n,time);
  cout<<ans<<endl;
  return 0;
}
