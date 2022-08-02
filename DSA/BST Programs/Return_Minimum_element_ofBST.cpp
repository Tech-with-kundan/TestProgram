/*You are given the root of a binary search tree (BST) and an integer val.

Given a Binary Search Tree. The task is to find the minimum
 element in this given BST.

Example
 

Example 1:
Input: root = [4,2,7,1,3]
Output: [1]
Example 2:

Input: root = [4,2,7,1,3]
Output: 1 

*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
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
int minValue(Node* root) {
    // Code here
     if(root==NULL)
     return -1; 
     if(root->left==NULL)
       return root->data; 
       int ans=  minValue(root->left);
       return ans; 
}
     

};