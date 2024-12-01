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
    bool checkIfExist1(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && arr[j]*2==arr[i]){
                    return true;
                }
            }
        }
        return false;
    }
      bool checkIfExist2(vector<int>& arr) {
        set<int> value;
        for (int num : arr) {
            if (value.count(num * 2) || num % 2 == 0 && value.count(num / 2)) {

                return true;
            }
            value.insert(num);
        }
        return false;
    }
};