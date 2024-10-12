
#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
            {
                break;
            }
        }
        if (!(fast && fast->next))
        {
            return NULL;
        }
        while (head != slow)
        {
            head = head->next;
            slow = slow->next;
        }
        return head;
    }
};