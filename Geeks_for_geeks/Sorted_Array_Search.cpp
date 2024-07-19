#include <bits/stdc++.h>
using namespace std;

class Solution{
Public:
int searchInSorted(int arr[], int N, int K) 
    { 
        int ans=-1;
        int val=0;
       for(int i=0;i<N;i++){
           if(arr[i]==K){
               val++;
               break;
           }
          
       }
       return(val==0)?ans:val;
    }
};

int main(){
  int N,K,arr[N];
  cin>>N;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cin>>K;
  Solution s;
  int ans=s.searchInSorted(arr[],N,K);
  cout<<ans<<endl;
  return 0;
}
