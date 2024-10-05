#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int itration(map<int, int>&mpp){
        int sum=0;
        for(auto it:mpp){
            sum+=it.second;
        }
        return sum;
    }
    int itration2(unordered_map<int,int>&mpp){
        int sum=0;
        for(auto it:mpp){
            sum+=it.second;
        }
        return sum;
    }
};

int main(){
    Solution sol;

    map<int,int>mpp;
    mpp.insert({1,2});
    mpp.insert({3,4});

    unordered_map<int,int>mpp;
    return 0;
}