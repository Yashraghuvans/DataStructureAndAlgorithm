#include<bits/stdc++.h>
using namespace std;

class game{
    public:
    int random_generator(int ans){
         ans = rand() % 3;
        return ans;
    }
    bool check(int value,int match){
        if(value==match){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    int value, match,ans,cnt=1;
    game g;

    //banner
    X:
    string banner = "Welcome to the game";
    int numSpaces = (80 - banner.length()) / 2;
    for (int i = 0; i < 80; ++i) {
        cout << "*";
      }
    cout << endl;
    cout << string(numSpaces, ' ') << banner << endl;
    for (int i = 0; i < 80; ++i) {
        cout << "*";
    }
    cout <<endl;

    //running code
    cout<<"Select the option : \n\t\t0 : Rock\n\t\t1 : Paper\n\t\t2 : Sizer"<<endl;    
    cout<<"\t\t=";
    cin>>match;
    cout<<"\n";
    
    
    //analysis of input
    value=g.random_generator(ans);
    ans=g.random_generator(ans);
    if(g.check(value,match)){
        for(int i=0;i<80;++i){
        cout<<"*";
    }cout<<endl;
        cout<<"\n\t\tYou won good work !\n"<<endl;
    }
    else{
        for(int i=0;i<80;++i){
        cout<<"*";
    }cout<<endl;
        cout<<"\n\t\tYou loss try again !\n"<<endl;
    }

   
   return 0;
}
