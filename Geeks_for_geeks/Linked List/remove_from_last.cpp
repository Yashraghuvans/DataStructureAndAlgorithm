
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
