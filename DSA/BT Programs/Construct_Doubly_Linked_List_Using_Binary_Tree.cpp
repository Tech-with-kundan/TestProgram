/*
Given a Binary Tree (BT), convert it to a Doubly Linked List(DLL) In-Place.
 The left and right pointers in nodes are to be used as previous and next pointers respectively in
  converted DLL. The order of nodes in DLL must be same as Inorder of the given Binary Tree.
 The first node of Inorder traversal (leftmost node in BT) must be the head node of the DLL.

Example 1:

Input:
      1
    /  \
   3    2
Output:
3 1 2 
2 1 3 
Explanation: DLL would be 3<=>1<=>2


Example 2:

Input:
       10
      /   \
     20   30
   /   \
  40   60
Output:
40 20 60 10 30 
30 10 60 20 40
Explanation:  DLL would be 
40<=>20<=>60<=>10<=>30.
*/
  #include<iostream>
  using namespace std; 
  class Node  
  {
     public :
     Node * left; 
     int data; 
     Node * right; 
     Node(int data)
     {
        this->data= data; 
        left= NULL; 
        right= NULL; 
     }



  };

  class Solution
{
    public: 
      Node * start= NULL ;
      Node *  tail=NULL; 
        void  construct_doubly_linked_list(int data, Node  **tail){
             Node * Newnode= new Node; 
                  Newnode->data= data ; 
                  Newnode ->left=NULL; 
                  Newnode->right=NULL;
                   if(start==NULL){
                       start= Newnode; 
                       *tail= Newnode ; 
                   }
                   else{
                  (*tail)->right= Newnode ; 
                  Newnode->left= *tail; 
                  *tail= Newnode; 
                   }
        }
   
       void inorder(Node * root){
           if(root==NULL)
             return ; 
             inorder(root->left);
              construct_doubly_linked_list(root->data, &tail);
              inorder(root->right);
       }
    //Function to convert binary tree to doubly linked list and return it.
    Node * bToDLL(Node *root)
    {
        // your code here
       // the Idea is very simple  we will just will call inorder traversal traversal . 
        inorder(root);
        // this is our answer  ,  which is start pointer  .
        // this start pointer is a pointer of Doubly Linked List . 
        return start ; 
        
    }

