#include<bits/stdc++.h>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
     ListNode *creating(vector<int>arr){
        ListNode *head=new Node(arr[0]);
        ListNode *mover=head;
        for(int i=1;i<arr.size();i++){
            ListNode *temp=new ListNode(arr[i]);
            mover=temp->next;
            mover=temp;
        }
        return head;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* mover=head;
        while(n){
            mover=mover->next;
            n--;
        }
        if(mover==nullptr){
            return head->next;
        }
        while(mover->next!=nullptr){
            mover=mover->next;
            temp=temp->next;

        }
        mover=temp->next;
        temp->next=mover->next;
    return head;

    }
     void print(ListNode* head){
          ListNode* temp=head;
          while(temp!=NULL){
               cout<<temp->data<<" ";
          }
          cout<<endl;
     }
};
int main(){
     Solution s;
     vector<int>arr={1,2,3,4,4,5,6,7,8,9,10};
     int n=5;
     s.creating(arr);
     s.removeNthFromEnd(head,n);
     s.print(head);
     return head;
}
