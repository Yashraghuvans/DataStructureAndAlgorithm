#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int sum(vector<int>& v){
        int sum=accumulate(v.begin(),v.end(),0);
        return sum;
    }
    int highest(vector<int>& v){
        return *max_element(v.begin(),v.end());
    }

};

int main(){
    Solution s;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    return 0;
}