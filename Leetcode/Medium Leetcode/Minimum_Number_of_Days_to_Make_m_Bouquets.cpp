#include<bits/stdc.h>
using namespace std;

class Solution {

};

int main(){
  int m,k;
  vector<int>& bloomDay;
  int days;
  cout<<"Number of days :";cin>>days;
  cout<<"Number of flowers bloomed :\n";
  for(int i=0;i<days;i++){
    cin>>bloomDay[i];
  }
  cout<<"Number of Bouquets :";cin>>m;
  cout<<"Number of Flowers in bouquets :";cin>>k;

  Solution s;

  int ans=s.minDays(bloomDay,m,k);
  cout<<"Number of minimum days : "<<ans<<endl;
  
  return 0;
}
