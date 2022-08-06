/*
Given a singly linked list of size N. The task is to swap elements in the linked list pairwise.
For example, if the input list is 1 2 3 4, the resulting list after swaps will be 2 1 4 3.
Note: You need to swap the nodes, not only the data. If only data is swapped then driver will print -1.

Example 1:

Input:
LinkedList: 1->2->2->4->5->6->7->8
Output: 2 1 4 2 6 5 8 7
Explanation: After swapping each pair
considering (1,2), (2, 4), (5, 6).. so
on as pairs, we get 2, 1, 4, 2, 6, 5,
8, 7 as a new linked list.
 

Example 2:

Input:
LinkedList: 1->3->4->7->9->10->1
Output: 3 1 7 4 10 9 1
Explanation: After swapping each pair
considering (1,3), (4, 7), (9, 10).. so
on as pairs, we get 3, 1, 7, 4, 10, 9,
1 as a new linked list.

*/

class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
      // lets' check for edges of linked list 
      if(head==NULL || head->next==NULL){
          return head;
      }
          //  As we have given in the question that we have to change the node not change the data of linked list
           Node *prev= head; 
           Node *  curr= head->next->next;
            head= head->next; 
            head->next= prev ; 
            // Why this code I have written above,  because abouve I have  swapped first two nodes explicitly . 
            while(curr!=NULL && curr->next!=NULL){
                prev->next= curr->next; 
                prev= curr; 
                // for next links 
                Node * Next= curr->next->next; 
                curr->next->next= curr; 
                curr= Next ; 
            }
             prev->next= curr; 
             return head; 
    }
};
