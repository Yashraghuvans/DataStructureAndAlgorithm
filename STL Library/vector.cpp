#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int traversing(vector<int>& v){
        vector<int>::iterator it = v.begin();
        it++;
        while(it!=v.end()){
            cout<<*it<<" ";
            it++;
        }
    } 
};

int main(){
    int n;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    return 0;
}