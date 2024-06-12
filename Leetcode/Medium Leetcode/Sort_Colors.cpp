#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<=n-1;i++){
            int j = i;
            while (j > 0 && arr[j - 1] > arr[j]) {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
                j--;
        }
        }
        
    }
};

int main(){
  vector<int>arr;
  int size;
  cout<<"Enter number of colours :";
  cin>>size;

  cout<<"Enter colour code :"<<endl;
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }

  Solution s;
  s.sortColors(arr);
  cout<<"sorted order :"<<endl;
  
  for(int i=0;i<size;i++){
    cout<<arr[i];
  }
 return 0;
}
