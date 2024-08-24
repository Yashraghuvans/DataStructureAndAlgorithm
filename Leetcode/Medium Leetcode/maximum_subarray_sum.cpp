#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
long long maxSubarraySum(vector<int> arr, int n)
{
    long long int max=0,sum=0;
    for(int i=0;i<arr.size();i++){
        sum=sum+arr[i];
        if(sum<0){
            sum=0;
        }
        if(sum>=max){
            max=sum;
        }
    }
    return max;
}
};
