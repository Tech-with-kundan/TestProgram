/*
Given a binary tree, find its height.

*/
class Solution{
    public:
       
    //Function to find the height of a binary tree.
    int height(struct Node* node){
          if(node==NULL)
             return 0; 
             // very simple algoritham of finding the height of tree . 
             // we will have to call recrusively  the base will be the  if node==NULL that means it will be leaf node  
             // the we will return 0 and then we will call for left  node and right node  to get our answer . 
             return max(height(node->left), height(node->right))+1; 
               
    }
};