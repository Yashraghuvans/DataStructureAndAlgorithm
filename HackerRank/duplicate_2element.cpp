#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int duplicate(vector<int>arr){
        int n=arr.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        int ans=-1;
        for(auto it:mpp){
            if(it.second==2){
                ans=it.first;
            }
        }
        return ans;
    }
};
int main(){
    vector<int>arr={1,2,3,4,4,5};
    Solution s;
    cout<<s.duplicate(arr)<<endl;
    return 0;
}
