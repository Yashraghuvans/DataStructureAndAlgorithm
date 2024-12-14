#include<bitset>/stdc++.h>
using namespace std;

struct node{
    public:
    int data;
    node* next;

    public:
    node(int data1,node *next1){
        data=data1;
        next=next1;
    }
    node(int data1){
        data=data1;
        next=nullptr;
    }
};

node *convert(vector<int> arr)
{
    node *head = new node(arr[0]);
    node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i]);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

