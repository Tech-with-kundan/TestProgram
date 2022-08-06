/*

Given a doubly-linked list, a position p, and an integer x.
 The task is to add a new node with value x at the position just after pth node in the doubly linked list.

Example 1:

Input:
LinkedList: 2<->4<->5
p = 2, x = 6 
Output: 2 4 5 6
Explanation: p = 2, and x = 6. So, 6 is
inserted after p, i.e, at position 3
(0-based indexing).
Example 2:

Input:
LinkedList: 1<->2<->3<->4
p = 0, x = 44
Output: 1 44 2 3 4
Explanation: p = 0, and x = 44 . So, 44
is inserted after p, i.e, at position 1
(0-based indexing).
*/

void addNode(struct Node *head, int pos, int data)
{
    // it is very easy problems 
    struct  Node * h= head; 
      
       while(pos--){
            h= h->next; 
       }

           Node * newNode= (struct Node*) malloc(sizeof(struct Node));
         // this is the C style of creation of newNode  in the Linked list  .
          
          newNode->data= data;
          
         //  check for last node 
          if(h->next==NULL){
              //   that means it is  last node 
              h->next= newNode ; 
              newNode->prev= h; 
              newNode->next=NULL; 
          }
          else{
              
              h->next->prev= newNode; 
              newNode -> next= h->next; 
              h->next= newNode; 
              newNode->prev= h; 
              
          }
         
          
          
}