#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void bitManipulation(int num, int i) {
      int ith_bit = (num >> i-1) & 1;
      int set_bit = (num | (1 << i-1));
      int clear_bit = (num & ~(1 << i-1));
      cout << ith_bit << " " << set_bit << " " << clear_bit;
    }
};
int main(){
  int num,i;
  cin>>num>>i;
  bitManipulation(num,i);
  return 0;
  
}
