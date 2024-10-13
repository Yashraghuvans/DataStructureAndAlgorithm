#include<bits/stdc++.h>
using namespace std;

int occur(vector<int> &arr,int n,int target){
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    int target,n;
    cin>>n>>target;
    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans=occur(arr,n,target);
    cout<<ans<<endl;
    return 0;
}