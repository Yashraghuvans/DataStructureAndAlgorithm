#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int>mp;
        int count=0;
        int prefixsum=0;
        mp[0]=1;
        
        for(int i=0;i<nums.size();i++){
            prefixsum+=nums[i];
            int remove=prefixsum%k;
            if(remove<0){
                remove+=k;
            }
            if(mp.find(remove)!=mp.end()){
            count+=mp[remove];
            mp[remove]++;
            }
            else{
            mp[remove]=1;
            }
            
        }
        return count;
    }
};
int main() {
    vector<int> nums;
    int k;

    cout << "Enter the size of the array: ";
    cin >> int size;

    if (size <= 0) {
        cerr << "Error: Invalid size. Please enter a positive integer." << endl;
        return 1; 
    }

    cout << "Enter the elements of the array (space-separated): ";
    for (int i = 0; i < size; i++) {
        int num;
        cin >> num;
        nums.push_ back(num);
    }

    cout << "Enter the value of k: ";
    cin >> k;

    Solution s;
    int count = s.subarraysDivByK(nums, k);

    cout << "Number of subarrays with sum divisible by " << k << ": " << count << endl;

    return 0;
}
