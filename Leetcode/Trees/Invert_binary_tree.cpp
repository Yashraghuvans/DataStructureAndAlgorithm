#include<bits/stdc++.h>
using namespace std;
 struct TreeNode {
    int val;
     TreeNode *left;
     TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
  right(right) {}
  };
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) {
            return nullptr;
        }
    
        if (root->left)
            invertTree(root->left);
        if (root->right)
            invertTree(root->right);
        
        TreeNode* tmp = root->left;
        root->left = root->right;
        root->right = tmp;

        return root;
    }
};
int main(){
  return 0;
}
