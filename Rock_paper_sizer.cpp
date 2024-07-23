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

   
   return 0;
}
