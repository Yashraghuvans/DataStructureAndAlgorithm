#include <bits/stdc++.h>
using namespace std;

void merge_sort(int arr[], int low, int high, int n) {
    if (low == high) return;
    int mid = low + high / 2;
    merge_sort(arr, low, mid, n);
    merge_sort(arr + mid, n - mid, high, n);
    merge(arr, low, high, n);
}

void merge(int arr[], int low,int high,int n) {
    int mid=(low+high)/2;
    int i=low;
    int j=mid+1;
    int k=low;
    int temp[n];
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
        }
        else{
            temp[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=high){
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i];
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
  
    merge_sort(arr, low, high, n);
    return 0;
}

