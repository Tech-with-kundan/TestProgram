/*
Given an array arr[] of N nodes representing preorder traversal of some BST.
 You have to build the exact BST from it's given preorder traversal. 
In Pre-Order traversal, the root node is visited before the left child and right child nodes.
*/
class Solution{
public:
        Node * NewNode(int data){
            Node * temp= new Node;
             temp->data= data; 
             temp->left= temp->right= NULL; 
             return temp; 
        }
    Node * BuildBst ( int data, Node *start){
          if(start==NULL){
               Node * n=NewNode(data);
               return n ; 
          }
             if(start->data> data)  // if the data will be found smaller than its node then we will call for its left subtree.
                 start->left=BuildBst (data,start->left); 
                 
              else      // if the data will be found  greater that its root value then we will call for right subtree.
                         // why wiil we call like this because we want to  maintain the binary propertities . that 's why we will call .  
                 start->right=BuildBst (data, start->right);
 
             
    }
        
         void BuildBst1(int *pre, Node ** s, int size ){
                for(int i=0; i<size; i++)
                   *s=BuildBst(pre[i], *s);
                  // return s; 
                   
         } 
    //Function that constructs BST from its preorder traversal.
    Node* post_order(int pre[], int size)
    {
        //code here
        Node *start=NULL ; 
        
             BuildBst1(pre, &start, size);
        
         return start; 
    }
};