#include<bits/stdc++.h>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* mover=head;
        while(n){
            mover=mover->next;
            n--;
        }
        if(mover==nullptr){
            return head->next;
        }
        while(mover->next!=nullptr){
            mover=mover->next;
            temp=temp->next;

        }
        mover=temp->next;
        temp->next=mover->next;
    return head;

    }
};

int main(){
      Solution s;
      return 0;
}
