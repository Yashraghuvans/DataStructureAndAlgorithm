#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void iteration_st(set<int>& result){
        for(auto i=result.begin(); i!=result.end(); i++){
            cout<<*i<<" ";
        }
        cout<<endl;
    
    }
    void iteration_st2(unordered_set<int>& result){
        for(auto i=result.begin(); i!=result.end(); i++){
            cout<<*i<<" ";
        }
        cout<<endl;
    }
    void iteration_mst(multiset<int>& result){
        for(auto i=result.begin(); i!=result.end(); i++){
            cout<<*i<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Solution obj;

    set<int>st;
    st.insert(1);

    unordered_set<int>st2;
    st2.insert(2);

    multiset<int>mst;
    mst.insert(3);

    return 0;
}