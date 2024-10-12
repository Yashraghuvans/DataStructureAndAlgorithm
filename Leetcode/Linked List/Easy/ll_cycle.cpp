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
    bool hasCycle(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return false;
        }
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast != slow)
        {
            if (fast->next == NULL || fast->next->next == NULL)
            {
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
    bool hasCycle1(ListNode *head)
    {
        if (head == NULL && head->next == NULL)
        {
            return false;
        }
        ListNode *temp = head;
        ListNode *back = head->next;
        while (temp != nullptr)
        {
            temp = temp->next;
            back = back->next->next;
            if (temp == back)
            {
                return true;
            }
        }
        return false;
    }
};

int main(){
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = head->next;
    cout << s.hasCycle(head) << endl; 
    cout << s.hasCycle1(head) << endl; 
    return 0;
}