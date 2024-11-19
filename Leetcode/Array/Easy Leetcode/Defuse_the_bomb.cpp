#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int N = code.size();
        vector<int> res(N, 0);
        
        for (int i = 0; i < N; i++) {
            if (k > 0) {
                for (int j = i + 1; j < i + 1 + k; j++) {
                    res[i] += code[j % N];
                }
            }
            else if (k < 0) {
                for (int j = i - 1; j > i - 1 - abs(k); j--) {
                    res[i] += code[((j % N) + N) % N];
                }
            }
        }
        
        return res;
    }
};
int main(){
    vector<int>code;
    int k,n;
    cin>>n>>k;
    
    for(int i=0;i<n;i++){
        cin>>code[i];
    }
    
    Solution s;
    s.decrypt(code,k);
    
    for(int i=0;i<n;i++){
        cout<<code[i];
    }
    return 0;
    
}
