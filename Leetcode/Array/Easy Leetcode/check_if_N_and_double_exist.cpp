class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            int target = arr[left] * 2;
            if (arr[right] == target) {
                return true;
            } else if (arr[right] < target) {
                right--;
            } else {
                left++;
            }
        }

        return false;
    }
};