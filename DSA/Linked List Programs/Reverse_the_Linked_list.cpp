/*
Given a linked list of N nodes. The task is to reverse this list.

Example 1:
Input:
LinkedList: 1->2->3->4->5->6
Output: 6 5 4 3 2 1
Explanation: After reversing the list, 
elements are 6->5->4->3->2->1.
*/
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
         // code here
        // return head of reversed list
        // the logic of  reverse linked list is so simple just we have to take 
       //three pointer   and work wil be done . 
        Node * curr= head; 
        Node * prev=NULL; 
        Node * Next= NULL;
         while(curr){
              Next= curr->next; 
              curr->next= prev; 
              prev=  curr; 
              curr= Next; 
         }
         return prev; 
        
       
    }
};