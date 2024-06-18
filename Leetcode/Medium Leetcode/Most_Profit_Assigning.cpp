#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>vp;
        int n=difficulty.size(),m=worker.size();
        for(int i=0;i<n;i++){
            vp.push_back({difficulty[i],profit[i]});
        }
        sort(vp.begin(),vp.end());
        sort(worker.begin(),worker.end());

        int profitsum=0,maxprofit=0,j=0;
        for(int i=0;i<m;i++){
            while(j<m && vp[j].first <= worker[i]){
                maxprofit=max(maxprofit,vp[j].second);
                j++;
            }
            profitsum+=maxprofit;
        }
       return profitsum;
    }
};

int main(){
    vector<int>difficulty;
    vector<int>profit;
    vector<int>worker;
    int m,n,o;

    cout<<"Enter number of workers    :";cin>>m;
    cout<<"Enter number of difficulty :";cin>>n;
    cout<<"Enter number of profit     :";cin>>o;

    for(int i=0;i<m;i++){
        cin>>worker[i];
    }
    
    for(int i=0;i<n;i++){
        cin>>difficulty[i];
    }
    
    for(int i=0;i<o;i++){
        cin>>profit[i];
    }

    Solution s;
    int ans= s.maxProfitAssignment(difficulty,profit,worker);
    cout<<"Max Profit Assignment : "<<ans<<endl;
    return 0;
}
