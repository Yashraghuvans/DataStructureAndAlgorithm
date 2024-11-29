#include<bits/stdc++.h>
using namespace std;

struct node{
  public:
  int data;
  node* next;
  node(int data1,node*next1){
      data=data1;
      next=next1;
  }
  node(int data1){
      data=data1;
      next=nullptr;
  }
};
node* convert(vector<int>arr){
    node*head=new node(arr[0]);
    node*mover=head;
    for(int i=1;i<arr.size();i++){
        node*temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
node* print(node* head){
    node*temp=head;
    cout<<"----------------------------------"<<endl;
    cout<<"Linked List = ";
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<"----------------------------------"<<endl;
    return head;
}
node* insert_in_end(node*head,int value){
    node*mover=head;
    while(mover->next!=nullptr){
        mover=mover->next;
    }
    node*curr=new node(value);
    mover->next=curr;
    return head;
}
void mid_finder(node*head){
    node*temp=head;
    node*fast=temp;
    node*slow=temp;
    while(fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<"mid = "<< (slow->data);
}
void createLoop(node* head, int position) {
    node* current = head;
    node* loopNode = nullptr;

    for (int i = 0; i < position; i++) {
        current = current->next;
    }

    loopNode = current;

    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = loopNode;
}

void detectLoop(node* head) {
    node *slow = head, *fast = head;
    cout<<endl;
     while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            node *loopNode = slow;
            slow = head;
            while (slow != loopNode) {
                slow = slow->next;
                loopNode = loopNode->next;
            }
            cout << "\nLoop node data: " <<loopNode->data << endl;
        }
    }
}
void delete_k(node*head,int x){
    node* temp=head;
    node* curr=head;
    for(int i=1;i<=x-1;i++){
        curr=curr->next;
    }
    for(int i=1;i<=x;i++){
        temp=temp->next;
    }
    curr->next=temp->next;
    free(temp);
    
}
int main(){
    vector<int>arr={1,2,3,4,5,6,7,8};
    int value=9;
    node*head=convert(arr);
    print(head);
    insert_in_end(head,value);
    print(head);
    mid_finder(head);
    createLoop(head,4);
    detectLoop(head);
    
    return 0;
}