#include <bits/stdc++.h>
using namespace std;

int main(){
   vector<vector<int>>mat1(3,vector<int>(3));
    cout<<"Enter the first matrix : "<<endl;
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat1[i][j];
        }
    }
    vector<vector<int>>mat2(3,vector<int>(3));
    cout<<"Enter the second matrix : "<<endl;
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat2[i][j];
        }
    }
    vector<vector<int>>mat_mult(3,vector<int>(3));
    mat_mult[0][0]=0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for(int k=0;k<3;k++){
               mat_mult[i][j]+=mat1[k][i]*mat2[j][k];
            }
        }
    }
   cout<<"matrix : "<<endl;
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat_mutl[i][j];
        }
    }
  return 0;
}
