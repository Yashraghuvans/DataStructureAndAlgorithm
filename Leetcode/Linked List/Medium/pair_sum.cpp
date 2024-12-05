#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pairSum(ListNode* head) {
        int sz = 0;
        ListNode* temp = head;
        vector<int> temparr;
        while (temp != nullptr) {
            temparr.push_back(temp->val);
            temp = temp->next;
            sz++;
        }
        int p1 = 0, p2 = sz - 1;
        int ans = INT_MIN;
        while (p1 < p2) {
            ans = max(ans, temparr[p1++] + temparr[p2--]);
        }
        return ans;
    }
};
int main(){
    return 0;
}