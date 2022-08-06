/*
Given two sorted linked lists consisting of N and M nodes respectively. 
The task is to merge both of the list (in-place) and return head of the merged list.



Example 1:

Input:
N = 4, M = 3 
valueN[] = {5,10,15,40}
valueM[] = {2,3,20}
Output: 2 3 5 10 15 20 40
Explanation: After merging the two linked
lists, we have merged list as 2, 3, 5,
10, 15, 20, 40.


Example 2:

Input:
N = 2, M = 2
valueN[] = {1,1}
valueM[] = {2,4}
Output:1 1 2 4
Explanation: After merging the given two
linked list , we have 1, 1, 2, 4 as
output.
*/
//Function to merge two sorted linked list.
 class List{
  public :
Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
     Node* demo= new Node(-1);
     Node * tra=demo;
        while(head1!=NULL && head2!=NULL){
             if(head1->data<= head2->data){
                  tra->next= head1; 
                  head1= head1->next; 
                  tra=tra->next; 
             }
             else{
                  tra->next= head2; 
                  head2= head2->next; 
                  tra= tra->next; 
             }
        }
          // Any of the list is still not empty we   will add simply in the anser list . 
           while(head1!=NULL){
                 tra->next= head1; 
                  head1= head1->next; 
                  tra=tra->next; 
           }
             while(head2!=NULL){
                  tra->next= head2; 
                  head2= head2->next; 
                  tra= tra->next; 
             }
              Node * ans= demo->next; 
               return ans; 
     
      
}  
 };
 