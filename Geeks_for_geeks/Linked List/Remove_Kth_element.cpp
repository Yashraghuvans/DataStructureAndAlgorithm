#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1,Node *next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

class Solution{
    public:
    Node *creating(vector<int>arr){
        Node *head=new Node(arr[0]);
        Node *mover=head;
        for(int i=1;i<arr.size();i++){
            Node *temp=new Node(arr[i]);
            mover=temp->next;
            mover=temp;
        }
        return head;
    }
};




int main(){
    Solution s;
    vector<int> arr={1,2,3,4,5};
    Node *head=s.creating(arr);
    return 0;
}