#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
           int row = 0, col = matrix[0].size() - 1;
        while (row < matrix.size() && col >= 0) {
            if (matrix[row][col] == target) 
                return true;
            if (matrix[row][col] < target) 
                row++;
            else 
                col--;
        }
        return false;
    }
};

int main() {
    Solution s;
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 50}};
    int target = 3;
    cout << s.searchMatrix(matrix, target) << endl;
    return 0;
}