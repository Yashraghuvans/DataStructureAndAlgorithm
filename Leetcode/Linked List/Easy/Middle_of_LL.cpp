
#include <bits/stdc++.h>

using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    int length(ListNode *head)
    {
        int len = 0;
        while (head != NULL)
        {
            len++;
            head = head->next;
        }
        return len;
    }
    ListNode *middleNode(ListNode *head)
    {
        int len = length(head);
        int ans = (len / 2);
        int cnt = 0;
        ListNode *temp = head;

        while (cnt < ans)
        {
            temp = temp->next;
            cnt++;
        }
        return temp;
    }

    ListNode *middleNode(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

int main()
{
    Solution obj;
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
}