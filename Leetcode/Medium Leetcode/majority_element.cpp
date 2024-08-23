#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution{
public :
int ans(vector<int>&arr){
        int cnt;
        int fin;
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            cnt=0;
            for(int j=0;j<arr.size();j++){
                if(arr[j]==arr[i])cnt++;
            }
            if(cnt>arr.size()/2)fin= arr[i];
        }
       return fin; 
    }
int ans2(vector<int>&arr){
    map<int,int>mpp;
    int n=arr.size();
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second>n/2){
            return it.first;
        }
    }
    return -1;
}
};




int main() {
    
    vector<int> arr = {1, 2, 2, 3, 2};
    Solution solution;

   
    int majorityElement = solution.ans(arr);

 
    cout << "Majority element: " << majorityElement << endl;
    return 0;
}
