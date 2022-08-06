/*
Given an unsorted linked list of N nodes. 
The task is to remove duplicate elements from this unsorted Linked List.
 When a value appears in multiple nodes, the node which appeared first should be kept,
 all others duplicates are to be removed.


 Example 1:

Input:
N = 4
value[] = {5,2,2,4}
Output: 5 2 4
Explanation:Given linked list elements are
5->2->2->4, in which 2 is repeated only.
So, we will delete the extra repeated
elements 2 from the linked list and the
resultant linked list will contain 5->2->4

Example 2:

Input:
N = 5
value[] = {2,2,2,2,2}
Output: 2
Explanation:Given linked list elements are
2->2->2->2->2, in which 2 is repeated. So,
we will delete the extra repeated elements
2 from the linked list and the resultant
linked list will contain only 2.
*/

class Solution
{
    public:
   
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
       // the problems is saying that we have to delete the duplicate node from the 
       // unodorted list , bit is this question is not an easy but it also no complicats
       // just we have to  think a bit more . 
       // let's started the process of thinking the logic . 
       // lets' create the first the dummy node
        Node * dummy= new Node (-1);
               // dummy->next=NULL; 
        Node * tra= dummy;
         Node * temp= head; 
         unordered_map<int,int> m;
         while(temp){
              m[temp->data]++;
              temp=temp->next; 
         }
           while(head){
                if(m[head->data]>=1)
                {
                      m[head->data]=0; 
                     tra->next= head; 
                     head= head->next; 
                     tra= tra->next; 
                     tra->next= NULL ;
                     
                }
                else
                head= head->next; 
           }
           Node * ans= dummy->next; 
           return ans; 
    }
};