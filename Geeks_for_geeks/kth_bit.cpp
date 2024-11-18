#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool checkKthBit(int n, int k) {
        return (n &(1<<k)) >0;
    }
};

int main(){
  return 0;
}
