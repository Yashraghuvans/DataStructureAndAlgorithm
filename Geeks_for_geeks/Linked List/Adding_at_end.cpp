#include<bits/stdc++.h>
#include <iostream>
using namespace std;


class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        if (head == NULL) {
            Node *curr = new Node(x);
            return curr;
            }
        else {
            Node *temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
                
            }
        Node *curr = new Node(x);
        temp->next = curr;
            
        }
        return head;
        
    }
};

int main(){

    Solution obj;
    Node* head = NULL;
    head = obj.insertAtEnd(head, 1);
    head = obj.insertAtEnd(head, 2);
    return 0;
}
