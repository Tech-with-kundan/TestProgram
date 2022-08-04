/*
Given a singly linked list consisting of N nodes. The task is to remove duplicates (nodes with duplicate values) from the given list (if exists).
Note: Try not to use extra space. Expected time complexity is O(N). The nodes are arranged in a sorted way.

Example 1:
Input:
LinkedList: 2->2->4->5
Output: 2 4 5
Explanation: In the given linked list 
2 ->2 -> 4-> 5, only 2 occurs more 
than 1 time.

Example 2:

Input:
LinkedList: 2->2->2->2->2
Output: 2
Explanation: In the given linked list 
2 ->2 ->2 ->2 ->2, 2 is the only element
and is repeated 5 times.
*/
  class sol{
    public : 
Node *removeDuplicates(Node *head)
{
 // your code goes here
  // the Idea is very simple we have create the just one temproray new node 
  // after that we what will will do , we will traverse the whole list . 
  // inorder to get our answer .  
  // whenever we get same value's node we change the link to one pointer  to another pointer . 
   
  Node * curr=  head; 
   Node * T= new Node(-1) ;
     T->next= curr;  
  Node * Next= head->next; 
       while(Next){
            if(Next->data == curr->data){
                Next= Next->next; 
            }
            else
            {
                curr->next=Next ; 
                curr=Next; 
                Next=Next->next; 
            }
       }
         curr->next=NULL; 
       Node * ans= T->next; 
       return ans; 
}
  };