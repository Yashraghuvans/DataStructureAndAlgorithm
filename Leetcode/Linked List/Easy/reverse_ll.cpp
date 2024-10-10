#include<bits/stdc++.h>

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
    ListNode *reverseList(ListNode *head)
    {
        stack<int> st;
        ListNode *temp = head;
        while (temp != NULL)
        {
            st.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while (temp != NULL)
        {
            temp->val = st.top();
            st.pop();
            temp = temp->next;
        }
        return head;
    }
       ListNode* reverseListNew(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while (temp != NULL) {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
};

int main(){
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
}