#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
  void fact(int n){
    if(n==0){
      return 1;
    }
    else return (n*fact(n-1));
  }
  void fibo(int k){
    if(n==1){
      return 0;
    }
    if(k==2){
      return 1;
    }
    else return(fibo(k-1)+fibo(n-2));
  }
}
int main(){
  int n;
  Solution s;

  //series 
  for(int i=0;i<n;i++){
    s.fibo(i);
    cout<<i<<" ";
  }

  //factorial
  cout<<s.fact(n)<<endl;

  
  return 0;
}
