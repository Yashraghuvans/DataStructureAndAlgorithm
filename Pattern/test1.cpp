#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int pattern1(int n){
        for(int i=1; i<n; i++){
            for (int j = 1; j <= i; j++)
            {
                cout<<" * ";
            }
            cout<<endl;
        }
            
    }
    int pattern2(int n){
        for(int i=1; i<=n; i++){
            for (int j = 1; j < i; j++)
            {
                cout<<"  ";
            }
            for(int j = i; j < n; j++){
                cout<<" * ";
            }
            cout<<endl;
        }
    }
    int pattern3(int n){
        for(int i=1; i<=n; i++){
            for (int j = n; j > i; j--)
            {
                cout<<"  ";
            }
            for(int j = 0; j <2*i-1; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
    int pattern4(int n){
        for (int i = n; i > 0; i--) {
            for (int j = 1; j <= n; j++) 
            {
                if (j >= i) {
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        
    }
};


int main(){
    int n;
    cin>>n;

    Solution s;
    //pattern 1
    s.pattern1(n);
    //pattern 2
    s.pattern2(n);
    //pattern 3
    s.pattern3(n);
    return 0;
}
