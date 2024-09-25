#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& arr, int pages) {
        int n = arr.size(); 
        int students = 1;
        long long pagesStudent = 0;
        for (int i = 0; i < n; i++) {
            if (pagesStudent + arr[i] <= pages) {
                
                pagesStudent += arr[i];
            } else {
               
                students++;
                pagesStudent = arr[i];
            }
        }
        return students;
    }
    int splitArray(vector<int>& arr, int m) {

      
        int n=arr.size();
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        while (low <= high) {
            int mid = (low + high) / 2;
            int students = countStudents(arr, mid);
            if (students > m) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};

int main()
{
    Solution s;
    vector<int> a = {10, 20, 30, 40};
    int k = 2;
    int ans =s.splitArray(a, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}