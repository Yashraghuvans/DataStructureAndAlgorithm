#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>v(heights);
        int count=0;
        sort(v.begin(),v.end());
        for(int i=0;i<heights.size();i++){
          if(height[i]!=v[i]){
            count++;
          }
        }
        return count;
    }
};

int main() {
    int num_students;


    cout << "Enter the number of students : ";
    cin>>num_students;

    vector<int> heights(num_students);


    cout << "Enter the heights of the students : ";
    for (int i = 0; i < num_students; ++i) {
        cin >> heights[i];
    }

    Solution s;
    int num_changes = s.heightChecker(heights);

    cout << "Number of students whose height needs to be adjusted: " << num_changes << endl;

    return 0;
}
