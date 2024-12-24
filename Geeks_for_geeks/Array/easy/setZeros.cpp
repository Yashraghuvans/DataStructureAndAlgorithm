#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	
	vector<vector<int>>ans=matrix;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            if(matrix[i][j]==0)
            {
                int row=i;
                int col=j;
                for(int j=0;j<matrix[0].size();j++)
                {
                    ans[row][j]=0;
                }
                for(int i=0;i<matrix.size();i++)
                {
                    ans[i][col]=0;
                }
 
            }
        }
    }
 
   matrix=ans;
}
