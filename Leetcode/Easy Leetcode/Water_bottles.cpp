#inlcude <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
         int totalBottles = numBottles;

        while (numBottles >= numExchange) {
            totalBottles += numBottles / numExchange;
            numBottles = (numBottles / numExchange) + (numBottles % numExchange);
        }

        return totalBottles;
    }
};
int main(){
  Solution s;
    int numBottles,numExchange;
    cin>>numBottles;
    cin>>numExchange;
    int ans=s.numWaterBottles(numBottles,numExchange);
    cout<<ans<<endl;
}
