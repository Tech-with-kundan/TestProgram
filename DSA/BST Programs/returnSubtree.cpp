/*You are given the root of a binary search tree (BST) and an integer val.

Find the node in the BST that the node's value equals val and return 
the subtree rooted with that node. If such a node does not exist,
 return null.

 

Example 1:
Input: root = [4,2,7,1,3], val = 2
Output: [2,1,3]
Example 2:

Input: root = [4,2,7,1,3], val = 5
Output: []

*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include<bits/stdc++.h>
 using namespace std ; 
class Solution {
public:
     
    TreeNode* searchBST(TreeNode* root, int val) {
      // order - level order tarversaling 
        TreeNode * s=NULL; 
          deque<TreeNode*> p; 
          p.push_back(root);
              while(p.empty()==false){
                   TreeNode * fr= p.front();
                  p.pop_front();
                   if(fr->val==val)
                   {
                     s=fr; 
                       break;
                   }
                   if(fr->left!=NULL)
                     p.push_back(fr->left);
                  if(fr->right!=NULL)
                       p.push_back(fr->right);
              }
        return s;  
    }
};