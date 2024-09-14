#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
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

  void sortColors(vector<int>& nums) {
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) cnt0++;
            else if (nums[i] == 1) cnt1++;
            else cnt2++;
        }
        int index = 0;
        while (cnt0 > 0) {
            nums[index++] = 0;
            cnt0--;
        }
        while (cnt1 > 0) {
            nums[index++] = 1;
            cnt1--;
        }
        while (cnt2 > 0) {
            nums[index++] = 2;
            cnt2--;
        }
    }

//dutch algo flag algorithm
void sort2(vector<int>&arr){
    int n=arr.size();
    int mid=arr[0];
    int low=arr[0];
    int high=arr[n-1];
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}


};

int main(){
  Solution s;
  return 0;
}
