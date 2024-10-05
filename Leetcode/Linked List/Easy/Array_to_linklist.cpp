#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

class Solution{
    public:
    Node* convert(vector<int>&arr){
        Node*head=new Node(arr[0]);
        Node*mover=head;
        for(int i=1;i<arr.size();i++){
            Node*temp=new Node(arr[i]);
            mover->next=temp;
            mover=temp;
        }
        return head;
    }
};

int main(){
    Solution s;
    vector<int>arr={1,2,3,4,5};
    Node*head=s.convert(arr);

    Node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}