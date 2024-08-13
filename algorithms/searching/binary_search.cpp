#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    int binarySearch(vector<int>v,int value){
        int start=0;
        int end=v.size()-1;
        int mi;
        while(start<=end){
            int mid=(start+end)/2;
            if(v[mid]==value){
                return mid;
            }
            else if(v[mid]>value){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mi=mid;
        }
        if(v[mi]==value){
            cout<<"found the value in array at "<<v[mi]<<endl;
        }

    }
};

int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    int value;
    cout<<"enter the value to be searched\n="<<endl;
    cin>>value;
    solution s;
    cout<<s.binarySearch(v,value)<<endl;
    return 0;
}