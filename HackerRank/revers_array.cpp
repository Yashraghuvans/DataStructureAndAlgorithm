#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int reverse(vector<int>& v){
        int start = 0;
        int end = v.size() - 1;
        while(start < end){
            swap(v[start], v[end]);
            start++;
            end--;
        }
        return 0;
    }
};

int main(){
    Solution s;
    vector<int> v = {1, 2, 3, 4, 5};
    s.reverse(v);
    for(int i : v)
        cout << i << " ";
        
    return 0;
}