#include<bitset>/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
         if (node == nullptr) {
            return; 
        }
        if (node->next == nullptr) {
            delete node;
            return;
        }
        node->val = node->next->val;
        ListNode* temp = node->next;
        node->next = temp->next;
        delete temp;
    }
};