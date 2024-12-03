#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int bob=0;
    int alice=0;
    for(int i=0;i<a.size();i++){
        
            if(a[i]>b[i]){
                alice++;
            }
            else if(a[i]<b[i]){
                bob++;
            }
            
        
    }
    return {alice,bob};
}

