#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution{
public :

//brute force
int ans(vector<int>&arr){
        int cnt;
        int fin;
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            cnt=0;
            for(int j=0;j<arr.size();j++){
                if(arr[j]==arr[i])cnt++;
            }
            if(cnt>arr.size()/2)fin= arr[i];
        }
       return fin; 
}

//better
int ans2(vector<int>&arr){
    map<int,int>mpp;
    int n=arr.size();
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second>n/2){
            return it.first;
        }
    }
    return -1;
}

//optimal 
//moor's voting algorithm
int ans3(vector<int> v) {
	
	int cnt=0;
	int element;
	int n=v.size();
	for(int i=0;i<n;i++){
		if(cnt==0){
			cnt=1;
			element=v[i];
		}
		else if(v[i]==element){
			cnt++;
		}
		else{
			cnt--;
		}
	}
	int ans;
	for(int i=0;i<n;i++){
		if(v[i]==element)ans++;
	}
	if(ans>(n/2)){
		return element;
	}
	return -1;

}
};




int main() {
    
    vector<int> arr = {1, 2, 2, 3, 2};
    Solution solution;

   
    int ans = solution.ans(arr);
    cout << "Majority element: " << ans << endl;

    int ans2 = solution.ans2(arr);
    cout << "Majority element: " << ans2 << endl;
        
    int ans3 = solution.ans3(arr);
    cout << "Majority element: " << ans3 << endl;
    return 0;
}
