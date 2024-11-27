#include <bitset>/stdc++.h>
using namespace std;

class Solution{   
public:
    pair<int, int> get(int a, int b){
        a=a^b;
        b=a^b;
        a=a^b;
        return {a,b};
    }
};
int main(){
    Solution s;
    int a = 10, b = 5;
    pair<int, int> result = s.get(a, b);
    cout << "After swapping, a = " << result.first << " and b = " << result.second << endl;
    return 0;
}