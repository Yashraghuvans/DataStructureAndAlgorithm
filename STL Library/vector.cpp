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
    int printvc(vector<int>& v){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
        return 0;

        for(vector<int>::iterator it=v.begin();it!=v.end();it++){
            cout<<*it<<" ";
        }
    } 
};

int main(){
    int n;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    vector<int> arr(n);
    arr.push_back(1);
    arr.emplace_back(2);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    return 0;
}