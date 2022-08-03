
/*Given a BST and a value k, the task is to delete the nodes
 having values greater than or equal to k.

 Example 1 :

 */
public class solution{
    public : 
  Node * deleteNode(Node * root, int k )
     {
        //Your code here
        
          // this  question  looks  like a bit different than the others one . 
             // this  question which we are solving   it  will be solved by implementing the postorder tarveresal
             // how postorder traversal  because see the problem statements it says that delete the all the nodes which would be 
             // greater than or equal to k ,So now thinks about traversal techinque   as we have three treversal
             // techinque  inoreder tarversal it gives us sorted list  , preorder tarversal it gives the list  in which  the element  first data will be root's value .
             // and we  have third one traversal  is postorder it gives the list  that will be reverse of inorder tarversal . 
             // it was logic , here we will have to use postorder traversal in order to solve the problems . 
             if(root==NULL)
                 return NULL;
                 root->left=deleteNode(root->left,k);
                 root->right= deleteNode(root->right,k);
                 if(root->data>=k){
                     Node * temp= root->left ;
                      delete(root);
                      return temp; 
                 }
                 return root; 
    }
};
