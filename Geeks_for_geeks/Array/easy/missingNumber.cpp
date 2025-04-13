class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        int sum = 0;
        int tsum = 0;
        for(int i = 0 ; i<arr.size() ; i++)
        {
            sum += arr[i];
        }
        for(int i = 1 ; i<=(arr.size()+1) ; i++)
        {
            tsum += i;
        }
        return (tsum-sum);
    }
};
