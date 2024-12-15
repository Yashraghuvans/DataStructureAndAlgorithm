#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int>ans;
	map<int,int>mpp;
	for(int i=0;i<n;i++){
		mpp[arr1[i]]++;
	}
	for(int i=0;i<m;i++){
		 if (mpp.count(arr2[i])) {
            ans.push_back(arr2[i]);
            mpp[arr2[i]]--; 
            if (mpp[arr2[i]] == 0) {
                mpp.erase(arr2[i]); 
            }
        }
	}
	return ans;
}