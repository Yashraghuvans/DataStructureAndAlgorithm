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

void revers(int data) {
    
    stack<std::array<int, 1>> myStack;

    for (int i = 0; i < 5; ++i) {
        array<int, 1> tempArray = {arr[i]};
        myStack.push(tempArray);
    }

    while (!myStack.empty()) {
        array<int, 1> topArray = myStack.top();
        cout << topArray[0] << " ";
        myStack.pop();
    }
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    node *head = convert(arr);
    while(head!=nullptr){
        head = revers(head->data); 
    }
    return 0;
}