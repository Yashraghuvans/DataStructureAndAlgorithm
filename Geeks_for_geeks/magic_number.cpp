#include <iostream>
using namespace std;

class solution{
    public:
    bool magic_number(int n){
        int m=n;
        int sum=0;
        while(m!=0){
            int temp=m%10;
            sum+=temp;
            m/=10;
        }
        if(sum==10){
            return true;
        }
        return false;
    }
};

int main() {
    solution s;
    int n;
    cin>>n;
    bool ans=s.magic_number(n);
    cout<<ans;
    return 0;
}
