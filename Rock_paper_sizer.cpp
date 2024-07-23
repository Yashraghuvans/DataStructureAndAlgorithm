#include<bits/stdc++.h>
using namespace std;

class game{
    public:
    int random_generator(int ans){
         ans = rand() % 3;
        return ans;
    }
    int check(int value,int match){
        int a=value;
        int b=match;
        if((a==0 && b==1)){
          return 1;
          break;
        }
        else if((a==1 && b==2)){
            return 2;
            break;
        }
        else if((a==2 && b==0)){
            return 0;
            break;
        }
        else{ 
            return 3; 
            break;
        }
    }
    
    string chos(int ans){
        string taken;   
        switch(ans){
            case 0:
            taken="Rock";
            break;
            
            case 1:
            taken="Paper";
            break;
            
            case 2:
            taken="Sizer";
            break;
        }
        return taken;
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
    
    
    //call by value
    value=g.random_generator(ans);
    ans=g.random_generator(ans);
    int retrn=g.check(value,match);
    
    
    
    //computer choise
    string taken=g.chos(ans);
    
    

    //analysis of input
    if(retrn != 3){
        for(int i=0;i<80;++i){
            cout<<"*";
        }
        cout<<endl;
        cout<<"\n\t\tYou won good work !"<<endl;
        cout<<"\t\tComputer has choosed "<<taken<<endl;
        cout<<"\n";
    }
    else{
        for(int i=0;i<80;++i){
            cout<<"*";
        }
        cout<<endl;
        cout<<"\n\t\tYou loss try again !"<<endl;
        cout<<"\t\tComputer has choosed "<<taken<<endl;
        cout<<"\n";
    }
   
   
   //replay
    for(int i=0;i<80;++i){
        cout<<"*";
    }cout<<endl;
    
    cout<<"\n\t\twant to play again (0 or 1)\n\t\t=";
    cin>>cnt;
    if(cnt==1){
        cout << "\033[H\033[J" <<flush;
        goto X;
        
    }
    else{
        return 0;
    }
   
    
    
    return 0;
}
