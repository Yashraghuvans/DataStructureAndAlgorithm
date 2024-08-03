#include<bits/stdc++.h>
using namespace std;

class Solution{
  void sort012(int *arr,int n){
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         if(arr[i]<arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
           }
        }
     }
  }
void 1sort012(int *arr, int n){
   sort(arr+0,arr+n);
   
  }
};

int main(){
  Solution s;
  return 0;
}
