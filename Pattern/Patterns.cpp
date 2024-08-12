#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void pattern1(int n){
        for(int i=1; i<n; i++){
            for (int j = 1; j <= i; j++)
            {
                cout<<" * ";
            }
            cout<<endl;
        }
            
    }
    void pattern2(int n){
        for(int i=1; i<n; i++){
            for (int j = 1; j < i; j++)
            {
                cout<<"  ";
            }
            for(int j = i; j < n; j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    void pattern3(int n){
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
    void pattern4(int n){
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
        for(int i=1; i<=n; i++){
            for (int j = i; j < n; j++)
            {
                cout<<"* ";
            }
            for(int j = 2*i-1; j >0; j--){
                cout<<" ";
            }
            cout<<endl;
        }
        
    }
    void pattern5(int n){
        for(int i=1; i<n; i++){
            for (int j = i; j < n; j++)
            {
                cout<<" * ";
            }
            cout<<endl;
        }
            
    }
    void pattern6(int n){
         for(int i=1; i<n; i++){
            for (int j = n; j > i; j--)
            {
                cout<<"  ";
            }
            for(int j = 0; j <2*i-1; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i=n; i>0; i--){
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
    void pattern7(int n){
      for(int i = n ; i>0 ; i--){
        for (int j = i ; j <n ; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
      }
            
    }
};


int main(){
    int n;
    cout<<"enter number of stars :"<<endl;
    cin>>n;
     Solution s;

    int choise;
    cout<<"enter any number between 1 to 7 :"<<endl;
    cin>>choise;

    switch(choise){
        case 1:
            s.pattern1(n); //pattern 1
            break;
        case 2:
            s.pattern2(n); //pattern 2
            break;
        case 3:
            s.pattern3(n); //pattern 3
            break;
        case 4:
            s.pattern4(n); //pattern 4
            break;
        case 5:
            s.pattern5(n); //pattern 5
            break;
        case 6:
            s.pattern6(n); //pattern 5
            break;
        case 7:
            s.pattern7(n); //pattern 5
            break;
        default:
            cout<<"wrong !"<<endl;
            break;
    }

    
    return 0;
}
