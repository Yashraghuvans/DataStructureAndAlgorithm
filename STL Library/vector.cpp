#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int traversing(vector<int>& v){
        vector<int>::iterator it = v.begin();
        it++;
        while(it!=v.end()){
            cout<<*it<<" ";
            it++;
        }
    } 
};

