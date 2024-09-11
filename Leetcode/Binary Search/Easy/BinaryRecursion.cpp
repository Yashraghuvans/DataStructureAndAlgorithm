#include<bits/stdc++.h>
using namespace std;

class solution{
    private:
    
    
    public:
    int binaryRecursive(vector<int>& arr,int low,int high,int target){
        if(low>high){
            return -1;
        }
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            return binaryRecursive(arr,mid+1,high,target);
        }
        else{
            return binaryRecursive(arr,low,mid-1,target);
        }
    }


};

int main(){
    solution s;
    vector<int>arr;
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int target;
    cout<<"Enter the target element: ";
    cin>>target;
    
    int result=s.binaryRecursive(arr,0,n-1,target);
    if(result==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at index "<<result;
    }

    return 0;
}