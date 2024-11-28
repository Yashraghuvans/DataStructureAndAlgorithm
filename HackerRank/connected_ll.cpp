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
void connection_ll(node* head1,node* head2){
    int value=6;
    node* point1=head1;
    node* point2=head2;
    node* curr=head2;
    while(point2->next!=nullptr){
        point2=point2->next;
    }
    curr=point2;
    for(int i=1;i<=value;i++){
        point1=point1->next;
    }
    point1=curr;
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