#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long ExtractNumber(string sentence) {
        stringstream ss(sentence);
        string temp;
        vector<string> v;
        while(ss>>temp){
          v.push_back(temp);  
        }
        vector<long long> res;
        for(int i=0; i<v.size(); i++){
            if(all_of(v[i].begin(), v[i].end(), ::isdigit)){
                if(v[i].find('9')==string::npos) res.push_back(stoll(v[i]));
            }
        }
        if(!res.size()) return -1;
        else {
            sort(res.begin(), res.end());
            return res[res.size()-1];
        }
    }
};

int main(){
  
}
