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
int leastWeightCapacity(vector<int> &weights, int d)
{
   int low,high,mid;
   low=*max_element(weights.begin(),weights.end());
   high=accumulate(weights.begin(),weights.end(),0);

    while(low<=high){
        mid=(low+high)/2;
        int day=days(weights,mid);
        if(day<=d){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
   
}

};
int main(){
  solution s;
  return 0;
}
