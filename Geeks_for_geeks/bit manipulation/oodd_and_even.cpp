#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string oddEven(int n) {
        if(n&1){
            return "odd";
        }
        else{
            return "even";
        }
    }
};

int main(){
  int n;
  cin>>n;
  Solution s;
  s.oddEven(n);
  return 0;
}
