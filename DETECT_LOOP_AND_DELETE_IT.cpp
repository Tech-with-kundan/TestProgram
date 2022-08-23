/*
Given a linked list of N nodes such that it may contain a loop.

A loop here means that the last node of the link list is connected to the node at position X. If the link list does not have any loop, X=0.

Remove the loop from the linked list, if it is present.  


Example 1:

Input:
N = 3
value[] = {1,3,4}
X = 2
Output: 1
Explanation: The link list looks like
1 -> 3 -> 4
     ^    |
     |____|    
A loop is present. If you remove it 
successfully, the answer will be 1. 

Example 2:

Input:
N = 4
value[] = {1,8,3,4}
X = 0
Output: 1
Explanation: The Linked list does not 
contains any loop. 

*/


class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        // to remove a link in the list what will we do is first of all 
        // we will find where is the link after finding this link what will be next step 
        // the next step will be remove it .
         // for finding the loop in the linked  list we are gonnna use  rabbit and turtle algo.
         // after findding the loop we will find the begining node of loop and then we will break the chain  by assigning NULL   to responsible node's pointer . 
          Node * slow= head; 
          Node * fast= head; 
           while(fast != NULL && fast->next != NULL){
                slow= slow->next; 
                fast= fast->next->next; 
                if(slow == fast)
                    break; 
           }
            if(slow!= fast)
                 return ;  
           // Now we have found the link 
           Node * temp=  head  ; 
           while(temp!=fast)
           {
                temp= temp->next ; 
               fast= fast->next; 
           }
            
             while(fast->next != temp)
                  fast= fast->next; 
                  fast->next = NULL ; 
             
           
    }
}: