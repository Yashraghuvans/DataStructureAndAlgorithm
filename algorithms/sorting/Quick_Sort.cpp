#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int partition(vector<int>& arr,int low,int high){
        int pivat=arr[low];
        int i=high;
        int j=low;
        while(i<j){
            while(arr[i]<=pivat && i<=high-1){i++;}
            while(arr[j]>pivat && j>=low+1){j--;}
            if(i<j){
                swap(arr[i],arr[j]);
            }
        }swap(arr[low],arr[j]);
        return j;
    }
    void qs(vector<int>&arr,int low,int high){
        if(low<high){
            int pIndex=partition(arr,low,high);
            qs(arr,low,pIndex-1);
            qs(arr,pIndex+1,high);
        }
    }
    vector<int>quicksort(vector<int>arr){
        qs(arr,0,arr.size()-1);
        return arr;
    }
};

int main(){
    int n;
    vector<int>arr;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    Solution s;
    s.sort(arr);
    return 0;
}
