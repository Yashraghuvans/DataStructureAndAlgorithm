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
    int numWaterBottles1(int numBottles, int numExchange){
        int ans=numBottles;
         while (numBottles >= numExchange) {
            int rem=numBottles%numExchange;
            numBottles=numBottles/numExchange;
            ans+=numBottles;
            numBottles+=rem;
        }
        return ans;
    }
};
int main(){
  Solution s;
    int numBottles,numExchange;
    cin>>numBottles;
    cin>>numExchange;
    int ans=s.numWaterBottles(numBottles,numExchange);
    int ans1=s.numWaterBottles1(numBottles,numExchange);
    cout<<ans<<endl;
    cout<<ans1<<endl;
}
