/*
The diameter of a tree (sometimes called the width) is the number of nodes on the longest path between two end nodes. 
The diagram below shows two trees each with diameter nine, the leaves that form the ends of the longest path are shaded (note that there is more than one path in each tree of length nine,
 but no path longer than nine nodes). 


 Example 1:

Input:
       1
     /  \
    2    3
Output: 3


Example 2:

Input:
         10
        /   \
      20    30
    /   \ 
   40   60
Output: 4
*/

class Solution {
  public:int height(Node* root) {
        if(root == NULL)
            return 0;

        return max( height(root->left), height(root->right) ) + 1;
    }

    int diameter1(Node* root) {
        if(root == NULL)
            return 0;

        int option1 = diameter1(root->left);
        int option2 = diameter1(root->right);
        int option3 = 1 + height(root->left) + height(root->right);
        return max(option1, max(option2, option3));
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
          if(root==NULL)
           return 0; 
           return diameter1(root); 
    }
};
