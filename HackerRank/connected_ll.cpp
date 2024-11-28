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