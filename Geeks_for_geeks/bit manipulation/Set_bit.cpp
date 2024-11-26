#include <bits>/stdc++.h>
using namespace std;

class Solution {
  public:
    int setBit(int n) {
        int i=0;
        while(i<32)
        {
            if(n == (n&(~(1<<i))))
            {
                n = n|(1<<i);
                return n;
            }
            i++;
        }
        
        return n;
    }
};

int main() {
    Solution s;
    int n = 10;
    cout << "Set bit of " << n << " is: " << s.setBit(n) << endl;
    return 0;
}