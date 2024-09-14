#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int a=0;
        
        for(int i =0; i< arr2.size(); i++){ 
            for(int j= 0; j<arr1.size();j++){      
                if(arr1[j]==arr2[i]){
                    swap(arr1[a],arr1[j]);
                    a++;
                }  
            }
        }
        
        sort(arr1.begin()+a, arr1.end());
        return arr1;
    }
};

int main() {
    vector<int> arr1, arr2;
    int n1, n2;

    
    cout << "Enter the size of the first array (arr1): ";
    cin >> n1;
    cout << "Enter the size of the second array (arr2): ";
    cin >> n2;

    
    cout << "Enter the elements of arr1 (space-separated): ";
    for (int i = 0; i < n1; ++i) {
        int num;
        cin >> num;
        arr1.push_back(num);
    }

    
    cout << "Enter the elements of arr2 (space-separated): ";
    for (int i = 0; i < n2; ++i) {
        int num;
        cin >> num;
        arr2.push_back(num);
    }

    Solution s;
    vector<int> sorted_arr1 = s.relativeSortArray(arr1, arr2);

    cout << "Sorted array arr1: ";
    for (const int& num : sorted_arr1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
