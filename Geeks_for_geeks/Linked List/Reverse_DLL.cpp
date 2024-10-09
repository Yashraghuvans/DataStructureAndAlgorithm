#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *convert(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node* revers(Node* head){
    if(head==NULL){
        return head;
    }
    Node* back=NULL;
    Node* current=head;
    while(current !=NULL){
        back=current->back;
        current->back=current->next;
        current->next=back;
        current=current->back;
    }
    return current->back;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convert(arr);
    head = revers(head); 
}