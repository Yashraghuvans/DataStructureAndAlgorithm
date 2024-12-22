#include<bits/stdc++.h>
#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
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
