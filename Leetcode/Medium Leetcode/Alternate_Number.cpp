#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
vector<int> alternateNumbers(vector<int>&a) { 
    int n=a.size();
    vector<int>ans(n,0);
    int pos=0,neg=1;
    for(int i=0;i<a.size();i++){
        if(a[i]<0){
            ans[neg]=a[i];
            neg+=2;
        }
        else{
            ans[pos]=a[i];
            pos+=2;
        }
    }
    return ans;
 
}
vector<int> alternateNumbersNew(vector<int>&a) {
    vector<int>pos,neg;
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]<0){
            neg.push_back(a[i]);
        }
        else{
            pos.push_back(a[i]);
        }
    }
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            a[i*2]=pos[i];
            a[i*2+1]=neg[i];
        }
        int index=2*neg.size();
        for(int i=neg.size();i<pos.size();i++){
            a[index]=pos[i];
            index++;
        }
    }
    else{
        for(int i=0;i<pos.size();i++){
            a[i*2]=pos[i];
            a[i*2+1]=neg[i];
        }
        int index=2*pos.size();
        for(int i=pos.size();i<neg.size();i++){
            a[index]=neg[i];
            index++;
        }
    }
    return a;
}
};
