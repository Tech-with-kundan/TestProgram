/*Given a singly linked list of size N. The task is to left-shift the linked list by k nodes,
 where k is a given positive integer smaller than or equal to length of the linked list.

Example 1:

Input:
N = 5
value[] = {2, 4, 7, 8, 9}
k = 3
Output: 8 9 2 4 7
Explanation:
Rotate 1: 4 -> 7 -> 8 -> 9 -> 2
Rotate 2: 7 -> 8 -> 9 -> 2 -> 4
Rotate 3: 8 -> 9 -> 2 -> 4 -> 7
Example 2:

Input:
N = 8
value[] = {1, 2, 3, 4, 5, 6, 7, 8}
k = 4
Output: 5 6 7 8 1 2 3 4
*/
class Solution
{
    public:
    
     int getlength(Node * head)
     {
         int len= 0;
         while(head)
         { 
               len++;
             head= head->next; 
             
         }
         return len; 
     }
     Node * getlastptr(Node * head)
     {
         
          while(head->next != NULL)
                 head= head->next; 
           return head ; 
     }
    
    
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        
         int length= getlength(head);
         if(length==k)
            return head; 
            if(head==NULL)
              return NULL; 
              if(head->next==NULL)
                return head ; 
         
          Node * lastptr= getlastptr(head);
          
           k--; 
           Node *start= head; 
           while(k--)
           {
               start= start->next ; 
           }
           Node  * newptr= start->next; 
           start->next= NULL; 
           
           Node * last= getlastptr(newptr); 
           last->next =  head ; 
           return newptr ; 
           
    }
};