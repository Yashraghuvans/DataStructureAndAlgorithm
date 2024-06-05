#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int linear_search(vector<int>arr,int value){
        for(int i=0;i<arr.size();i++){
            if(arr[i] == value){
                cout<<"element found at index -> "<<i<<endl;
                return 0;
            }
        }
    }
};

int main(){
    //using only 20 enteries with predefined vector values
    vector<int>arr={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    Solution s;
    int n;
    cout<<"enter the number to search"<<endl;
    cin>>n;

    s.linear_search(arr,n);

    
    return 0;
}