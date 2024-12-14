#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    struct Node
{
    int data;
    Node *next;

    Node(int data1, Node *next1 = nullptr)
    {
        data = data1;
        next = next1;
    }
};

Node *reverseList(Node *head)
{
    stack<Node *> s;

    Node *current = head;
    while (current != nullptr)
    {
        s.push(current);
        current = current->next;
    }

    current = s.top();
    head = current;
    s.pop();

    while (!s.empty())
    {
        current->next = s.top();
        s.pop();
        current = current->next;
    }

    current->next = nullptr;

    return head;
}

int main()
{
    Node *head = new Node(1, new Node(2, new Node(3, new Node(4, new Node(5)))));

    head = reverseList(head);

    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout <<endl;

    return 0;
}