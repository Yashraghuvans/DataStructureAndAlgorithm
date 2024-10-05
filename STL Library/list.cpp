#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>ls;
    ls.emplace_back(4);
    ls.push_back(1);
    ls.push_front(2);
    ls.emplace_front(3);

    for(auto it=ls.begin(); it!=ls.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}