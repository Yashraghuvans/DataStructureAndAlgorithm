#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(numbers[i]+numbers[j]==target){
                    return {i+1,j+1};
                }
            }
        }
        return {0,0};
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                return {left + 1, right + 1};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return{};
    }
};

int main() {
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    Solution solution;
    vector<int> indices = solution.twoSum(numbers, target);

    cout << "Indices: 1  " << indices[0] << ", " << indices[1] << endl;

    return 0;
}
