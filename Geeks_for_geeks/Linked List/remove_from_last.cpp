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
     
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Remove the 2nd node from the end   

    int n = 2;
    Solution solution;
    ListNode* newHead = solution.removeNthFromEnd(head, n);

    // Print the modified linked list
    while (newHead != nullptr) {
        cout << newHead->val << " ";
        newHead = newHead->next;
    }
    cout << endl;

    return 0;
}
