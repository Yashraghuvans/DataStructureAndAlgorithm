#include<bits/stdc++.h>
using namespace std;

/*bitset is used to convert the number into its binary form and store it into a vector data*/
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