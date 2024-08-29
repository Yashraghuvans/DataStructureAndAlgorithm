#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
//brute force solution
vector<int> superiorElements(vector<int>&a) {
    int n=a.size();
    vector<int>lead;
    bool leader;
    for(int i=0;i<n;i++){
        leader=true;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                leader=false;
                break;
            }
        }
        if(leader==true){
            lead.push_back(a[i]);
        }
    }
    
    set<int> unique(lead.begin(), lead.end());
    vector<int> ans(unique.begin(), unique.end());

    sort(ans.begin(), ans.end());
    return ans;
}
//optimized
vector<int> superiorElements(vector<int>&a) {
    int maxi=0;
    int n=a.size();
    vector<int>ans;
    for(int i=n-1;i>=0;i--){
        if(a[i]>maxi){
            ans.push_back(a[i]);
        }
        maxi=max(maxi,a[i]);
    }
    set<int> lead(ans.begin(),ans.end());
    vector<int>answer(lead.begin(),lead.end());
    return answer;
}
};

int main(){
  Solution s;
  return 0;
}
