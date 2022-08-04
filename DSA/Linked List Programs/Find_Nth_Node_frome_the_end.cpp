/*
Given a linked list consisting of L nodes and given a number N.
 The task is to find the Nth node from the end of the linked list.

Example 1:
Input:
N = 2
LinkedList: 1->2->3->4->5->6->7->8->9
Output: 8
Explanation: In the first example, there
are 9 nodes in linked list and we need
to find 2nd node from end. 2nd node
from end os 8 .
*/
int getNthFromLast(Node *head, int n)
{
       // the first logic is saying that Do reverse the linked list 
       // and then check if and every node  after taking one more variable 
       // each and every step please check that if(n==c) return node->data ; otherwise keep going further . 
       
       Node * prev=NULL; 
       Node * curr=head; 
       Node * nextcurr=NULL; 
        while(curr){
             nextcurr=curr->next; 
             curr->next= prev ; 
             prev= curr; 
             curr= nextcurr; 
        }
        int c=1;
        int ans=-1; 
         while(prev){
               if(c==n)
                {
                     return  prev->data; 
                     //break;
                }
              c++;
              prev= prev->next;  
              
                 
         }
         return -1; 
}
