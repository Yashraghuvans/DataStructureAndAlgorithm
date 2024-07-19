#include<bits/stdc++.h>
using namespace std;
class Solution{  
public: 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
      
    set<int> unionSet; //because it stores only unique values no duplicates :) 

    
    for (int i = 0; i < n; i++) {
        unionSet.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++) {
        unionSet.insert(arr2[i]);
    }
    vector<int> result(unionSet.begin(), unionSet.end());
    return result;  
        
    }
};

