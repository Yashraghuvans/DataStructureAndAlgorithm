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