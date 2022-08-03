/*
You are given the root of a binary tree containing digits from 0 to 9 only.

Each root-to-leaf path in the tree represents a number.

For example, the root-to-leaf path 1 -> 2 -> 3 represents the number 123.
Return the total sum of all root-to-leaf numbers. Test cases are generated so that the answer will fit in a 32-bit integer.

A leaf node is a node with no children .
For example:- 
Input: root = [1,2,3]
Output: 25

 
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
class Solution {
public:
     int ans=0; 
      void rec(TreeNode * root, string s)
      {
           if(root==NULL)
               return ; 
          if(root->left==NULL && root->right==NULL)
              // this condition indicates our  leaf  nodes has found then what will we do we will  convert the string into integer by calling stoi function and we keep  adding the value into answer . 
          {
               s+= to_string(root->val);
               ans+= stoi(s);
              return;
          }
          rec(root->left, s+to_string(root->val)); // this function is for left node
          rec(root->right, s+to_string(root->val)); // this function is for right node . 
      }
    
int sumNumbers(TreeNode* root) {
    
            string s="";
       // whenever this types of question comes like add the leaf to root and root to leaf
    // apply this code  . 
    // what I have done in this code  just I have taken a empty string 
    // I have called the recrustion and  What I did on each and every recrustion just I addedd all  the nodes's value after it chaning it into string by calling to_string function . 
          rec(root,s); 
        return ans;
        
    }
};