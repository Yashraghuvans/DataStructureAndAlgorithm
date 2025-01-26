#include<bitset>/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int row=0;
        int col=0;
        vector<int> result;
        int flag=0;
        while(1){
            if(flag==0){
                while(row>0&&col<m-1){
                result.push_back(mat[row][col]);
                    row--;
                    col++;
                }
                result.push_back(mat[row][col]);
                flag=!flag;
                if(col<m-1) col++;
                else row++;
            }else{
                while(row<n-1&&col>0){
                    result.push_back(mat[row][col]);
                    col--;
                    row++;
                }
               result.push_back(mat[row][col]);
                flag=!flag;
                if(row<n-1) row++;
                else col++;
            }
            if(row>=n-1&&col>=m-1){
                 if(row==n-1&&col==m-1) result.push_back(mat[row][col]);
                 break;
            }
        }
        return result;
    }
};
int main(){
    Solution s;
    return 0;
}