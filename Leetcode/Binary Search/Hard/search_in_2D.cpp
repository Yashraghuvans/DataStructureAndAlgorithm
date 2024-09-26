#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m-1;j++){
                if(matrix[i][j]==target)return true;
            }
        }
        return false;
    }
};