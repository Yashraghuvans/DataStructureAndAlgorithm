#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {
        if (head == nullptr)
        {
            return head;
        }
        if (head->next == nullptr)
            return head->next;
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next;
            if (fast != nullptr && fast->next != nullptr)
            {
                slow = slow->next;
            }
        }
        slow->next = slow->next->next;
        return head;
    }

    ListNode *deleteMiddle1(ListNode *head)
    {
        ListNode *temp = head;
        int N = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            N++;
        }
        if (N == 1)
        {
            head = NULL;
            return head;
        }
        int mid = N / 2;
        temp = head;
        for (int i = 0; i < mid - 1 && temp->next != NULL; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};