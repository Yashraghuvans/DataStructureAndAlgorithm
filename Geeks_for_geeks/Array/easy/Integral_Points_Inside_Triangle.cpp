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
vector<int> findArrayIntersection1(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }

    return ans;
}
