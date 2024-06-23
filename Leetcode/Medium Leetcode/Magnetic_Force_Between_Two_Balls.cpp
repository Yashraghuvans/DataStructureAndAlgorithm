#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool canWePlace(const vector<int>& arr, int dist, int balls)  {
        int countBalls = 1;
        int lastPlaced = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - lastPlaced >= dist) {
                countBalls++;
                lastPlaced = arr[i];
            }
            if (countBalls >= balls) {
                return true;
            }
        }
        return false;
    }   
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int high = (position.back() - position[0]) / (m - 1);
        int low = 1;
        int ans = 1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(canWePlace(position,mid,m)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;

    }
};


int main(){
    Solution s;
    int n,m;
    vector<int>position;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>position[i];
    }
    int ans=s.maxDistance(position,m);
    cout<<ans<<endl;
    return 0;
}
