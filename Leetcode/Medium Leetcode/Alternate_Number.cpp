#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
vector<int> alternateNumbers(vector<int>&a) { 
    int n=a.size();
    vector<int>ans(n,0);
    int pos=0,neg=1;
    for(int i=0;i<a.size();i++){
        if(a[i]<0){
            ans[neg]=a[i];
            neg+=2;
        }
        else{
            ans[pos]=a[i];
            pos+=2;
        }
    }
    return ans;
 
}
};
