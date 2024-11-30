#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    public:
    int data;
    ListNode* next;

    public:
    ListNode(int data1,ListNode* next1){
        data=data1;
        next=next1;
    }
    ListNode(int data1){
        data=data1;
        next=nullptr;
    }
};


ListNode* constructor(vector<int>arr){
    ListNode*head=new ListNode(arr[0]);
    ListNode*mover=head;
    for(int i=1;i<arr.size();i++){
        ListNode*temp=new ListNode(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}


int main(){
    vector<int>num1={1,2,3};
    vector<int>num2={1,3,4};
    ListNode* head1= constructor(num1);
    ListNode* head2= constructor(num2);
    
   
    return 0;
}
