#include<bits/stdc.h>
using namespace std;

class Solution {
private:
    bool possible(vector<int>arr,int day,int m,int k){
        int cnt=0;
        int noOfB=0;
        int size=arr.size();
        for(int i=0;i<size;i++){
            if(arr[i]<=day){
                cnt++;
            }
            else{
                noOfB+=(cnt/k);
                cnt=0;
            }
        }
        noOfB+=(cnt/k);
        return noOfB>=m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val=m*1ll *k *1ll;
        int n=bloomDay.size();
        if(val>n)return -1;
        int mini=INT_MAX;
        int maxi=INT_MAX;

        for(int i=0;i<n;i++){
            mini=min(mini,bloomDay[i]);
            maxi=max(maxi,bloomDay[i]);
        }
        int low=mini;
        int high=maxi;
        

        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(bloomDay,mid,m,k)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }

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
