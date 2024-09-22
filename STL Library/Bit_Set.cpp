#include<bits/stdc++.h>
using namespace std;

/**/
class solution{
    public:
    int bitFinder(int n){
        bitset<32>binary(n);
        int cnt=0;
        for(int i=0;i<32;i++){
            if(binary[i]==1){
                cnt++;
            }
        }
        return cnt;
    }
};

int main(){
    int n;
    cin>>n;
    solution s;
    cout<<s.bitFinder(n);
    return 0;
}