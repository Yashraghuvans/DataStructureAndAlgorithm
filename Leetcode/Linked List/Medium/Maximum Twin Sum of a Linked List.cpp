#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pairSum(ListNode* head) {
        if (nullptr == head)
            return 0;

        ListNode* temp = new ListNode();
        temp = head;
        vector<int> d{};

        while (temp != nullptr) {
            d.push_back(temp->val);

            temp = temp->next;
        }

        int max{0};
        for (int i = 0; i < d.size() / 2; i++) {
            int sumnow = d[i] + d[d.size() - 1 - i];

            if (0 == i) {
                max = sumnow;
            } else {
                if (sumnow > max)
                    max = sumnow;
            }
        }
        return max;
    }
};
int main(){
  return 0;
}
