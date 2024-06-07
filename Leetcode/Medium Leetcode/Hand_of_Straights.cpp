#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize != 0){
            return false;
        }

        map<int,int>count;
        for(int card : hand){
            count[card]++;
        }

        for(auto it=count.begin();it != count.end();++it){
            if(it->second>0){
                int cot=it->second;
                for(int i=0;i<groupSize;++i){
                    if(count[it->first+i]<cot){
                        return false;
                    }
                    count[it->first+i]-=cot;
                }
            }
        }
        return true;
    }
};

int main() {
    int num_cards, group_size;

    cout << "Enter the number of cards: ";
    cin >> num_cards;

    if (num_cards <= 0) {
        cerr << "Error: Invalid number of cards. Please enter a positive integer." << endl;
        return 1; 
    }

    cout << "Enter the group size: ";
    cin >> group_size;

    if (group_size <= 0) {
        cerr << "Error: Invalid group size. Please enter a positive integer." << endl;
        return 1; 
    }

    if (num_cards % group_size != 0) {
        cerr << "Error: Number of cards must be divisible by group size." << endl;
        return 1; 
    }

    vector<int> hand(num_cards);
    cout << "Enter the card values (integers):\n";
    for (int i = 0; i < num_cards; ++i) {
        cin >> hand[i];
    }

   
    Solution s;
    bool is_straight = s.isNStraightHand(hand, group_size);

    if (is_straight) {
        cout << "The hand can be divided into groups of " << group_size << " consecutive cards." << endl;
    } else {
        cout << "The hand cannot be divided into groups of " << group_size << " consecutive cards." << endl;
    }

    return 0;
}
