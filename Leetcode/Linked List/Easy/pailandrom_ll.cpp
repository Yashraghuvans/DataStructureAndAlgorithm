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
    bool isPalindrome(ListNode *head)
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
            if (temp->val != st.top())
            {

                return false;
            }
            st.pop();
            temp = temp->next;
        }
        return true;
    }
};

int main(){
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);
    cout << s.isPalindrome(head) << endl;
    return 0;
 
}