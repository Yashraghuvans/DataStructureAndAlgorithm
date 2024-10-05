#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
           int n = mat.size(), m = mat[0].size();
        vector<int> row(n, 0);
        vector<int> col(m, 0);

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                int ele = mat[i][j];

                row[i] = max(row[i], ele);
                col[j] = max(col[j], ele);
            }
        }

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                int ele = mat[i][j];

                if(ele == row[i] && ele == col[j]){
                    return {i, j};
                }
            }
        }
        return {-1, -1};
    }
};

int main(){
    Solution s;
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> res = s.findPeakGrid(mat);
    cout << "Peak Element: (" << res[0] << ", " << res[1] << ")" << endl;
    return 0;
}