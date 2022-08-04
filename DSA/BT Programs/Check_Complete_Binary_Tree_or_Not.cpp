/*

 Check the given Binary Tree is complete Binary tree or not . 
Given a Binary Tree, write a function to check whether the given Binary Tree is Complete Binary Tree or not. A complete binary tree is a binary tree in which every level, except possibly the last, is completely filled, 
and all nodes are as far left as possible.
*/
class Solution{
public:    
    bool isCompleteBT(Node* root){
        //code here
        
        // level ordered traversal 
        // By applying the  level order traversal it would be cakewalk . 
         
    
          bool ans= false; 
            deque<Node*>pq;  // creation of dequeue as we know that how to create dequeue it works of FIFO
            pq.push_back(root);
            while(pq.empty()==false){ // we will taraverse it until it becomes emty
                Node * fr= pq.front(); // we will take out the front element . 
                pq.pop_front();
                 if(fr->left){  // if the left child is present then we wiil add that node but before adding that nodes we will
                 // check the previous result it is  true or  false  if it was false  the we will add otherwise we will return the answer  true .
                     if(ans==true)
                      return false;
                      pq.push_back(fr->left);
                 }
                 else
                  ans=true;
                  if(fr->right){ // And Here also we will do the same thing as I have done above . 
                      if(ans==true)
                         return false;
                         pq.push_back(fr->right);
                  }
                  else
                  ans= true;
                 
                    
            }
            return ans; 
    }
};