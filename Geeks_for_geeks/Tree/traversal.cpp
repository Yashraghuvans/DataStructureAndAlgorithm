#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>    // if using queues
#include <stack>  
using namespace std;

struct Node{
    int data;
    struct Node*left;
    struct Node*right;
    Node(int val)
    {
        data = val;
        left=right=NULL;
    }
};

void inorder(struct Node* node){
    if(node==NULL)
        return;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

void print(struct Node* node){
    if(node==NULL)
        return;
    cout<<node->data<<" ";
    print(node->left);
    print(node->right);
}

int main(){
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    return 0;
}