#include<bits/stdc++.h>
using namespace std;
class solution{
public:
int days(vector<int>arr,int cap){
    int days=1,load=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]+load>cap){
            days+=1;
            load=arr[i];
        }
        else{
            load+=arr[i];
        }
    }
    return days;
}


};
int main(){
  solution s;
  return 0;
}
