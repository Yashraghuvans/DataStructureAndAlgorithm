#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int largest=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
        return (largest!=INT_MIN) ? largest : -1;
    }
};

int main(){
  int n;
  cin>>n;
  vector<int>arr;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  Solution s;
  int ans=s.largest(arr,n)
  cout<<ans<<endl;
  return 0;
}
