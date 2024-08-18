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


};

int main(){
  Solution s;
  return 0;
}
