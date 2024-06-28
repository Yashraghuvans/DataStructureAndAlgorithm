#include <bits/stdc++.h>
using namespace std;

class Solution{
        public:
        int print2largest(vector<int>arr,int n){
                int largest=INT_MIN;
                int second=INT_MAX;
                for(int i=0;i<n;i++){
                        if(arr[i]>largest){
                                second=largest;
                                largest=arr[i];
                        }
                        else if(arr[i]>second && arr[i]!=largest){
                                second=arr[i];
                        }
                }
                return (second != INT_MIN) ? second : -1 ;
        }
}; 

int main(){
        int n;
        cin>>n;
        vector<int>arr;

        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        Solution s;
        int ans=s.print2largest(arr,n);
        cout<<ans<<endl;
        return 0;
}
