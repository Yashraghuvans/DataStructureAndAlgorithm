#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        if(head-> next==nullptr) return head-> next;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            if(fast!=nullptr && fast->next!=nullptr){
                slow=slow->next;
            }
        }
        slow->next=slow->next->next;
    return head;
    }
};