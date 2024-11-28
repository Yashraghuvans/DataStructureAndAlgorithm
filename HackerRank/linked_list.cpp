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