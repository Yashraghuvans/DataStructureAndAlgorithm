#include <bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    long long int p[2],q[2],r[2];
    cin>>p[0]>>p[1]>>q[0]>>q[1]>>r[0]>>r[1];
    Solution s;
    lond lond ans=s.InternalCount(p,q,r);
    cout<<ans<<endl;
    return 0;
}
