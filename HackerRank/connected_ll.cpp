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
    vector<int>arr1={1,2,3,4,5,6};
    vector<int>arr2={11,22,33,44};
    
    node*head1=convert(arr1);
    print(head1);
    node*head2=convert(arr2);
    print(head2);
    connection_ll(head1,head2);
    bool ans=interconnection(head1,head2);
    
    cout<<ans;
    
    return 0;
}