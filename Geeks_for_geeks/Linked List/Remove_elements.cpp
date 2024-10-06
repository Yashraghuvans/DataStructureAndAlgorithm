#include<bits/stdc++.h>
using namespace std;

//defined linklist
class Node{
    public:
    int data;
    Node *next;

    Node(int data1,Node *next1){
        data=data1;
        next=next1;
    }

    Node(int data1){
        data=data1;
        next=nullptr; 
    }
};

//creating linklist

class solution{
    public:
    Node *creating(vector<int>arr){
        Node *head=new Node(arr[0]);
        Node *mover=head;
        for(int i=0;i<arr.size();i++){
            Node *temp=new Node(arr[i]);
            mover->next=temp;
            mover=temp;
        }
        return head;
    }

    //deleting the head of linked list
    Node *delete_head(Node *head){
        Node *temp=head;
        head=head->next;
        delete temp;
        return head;
    }

    //deleting the end of linked list
    Node *delete_end(Node *head){
        Node *temp=head;
        if(head==NULL){
            if(head->next==NULL)return NULL;
        }
        while(head->next->next !=NULL){
            temp=temp->next;
        }
        free(temp->next);
        temp->next=nullptr;
        return head;
    }
};

int main(){
    vector<int>arr={1,2,3,4,5};
    solution s;
    Node *head=s.creating(arr);
}
