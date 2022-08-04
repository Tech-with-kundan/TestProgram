/*
Given a singly linked list of size N of integers. The task is to check if 
the given linked list is palindrome or not.
Input:
N = 3
value[] = {1,2,1}
Output: 1
Explanation: The given linked list is
1 2 1 , which is a palindrome and
Hence, the output is 1.

Example 2:

Input:
N = 4
value[] = {1,2,3,4}
Output: 0
Explanation: The given linked list
is 1 2 3 4 , which is not a palindrome
and Hence, the output is 0.
*/




class Solution{
  public:
   int Getlength(Node * head){
       if(head==NULL)
        return 0;
        int len=0; 
            while(head){
                head= head->next; 
                len++;
            }
            return len ;
   }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        // let's handle the edges cases
        if(head==NULL)
            return false; 
            if(head->next==NULL)
               return true; 
               if(head->next->next==NULL){
                    Node * t= head->next; 
                    if(t->data!=head->data)
                    return false; 
                    return true; 
               }
        //Your code here
        // we will split the linked list into two part the we will check each and every node is it equal
        // if we will found the both nodes are equal to each other then we will go to the next pointer . 
        // and at  the end we will return the yes . 
        // First off the we will find the length of linked list . 
         int length= Getlength(head);
         
          // Now we will check if this length is odd or not 
          // if we  find this even then we will delete the last  midile node . 
          Node *  slow= head; 
          Node * fast= head; 
          Node * ex=NULL; 
           while(fast!=NULL && fast->next!=NULL){
               ex=slow; 
              slow= slow->next; 
              fast= fast->next->next; 
              
          }
           Node * temp=NULL ; 
           // Why Have I checked acctuallly this condition  for  checking the lenght of linked list is oev of odd 
            if(length & 1)
             temp=  slow->next;
           else
            temp=slow; 
          // this code for reversing the half of linked list .  after reversing we will check  through each  and every node
           
           Node * curr= temp; 
           Node * prev=NULL; 
           Node * currN=NULL; 
             while(curr){
                 currN= curr->next; 
                 curr->next=prev; 
                 prev= curr; 
                 curr= currN; 
             }
             
            if(length & 1 ){
          // this code is written for  linked list soze of odd  .
             temp=prev; 
             ex->next=NULL; 
           
           while(head &&  temp){
                if(ex->data!=temp->data) // if data of both is not matchinig then  we will return false 
                    return false;
                     head= head->next; 
                     temp= temp->next; 
           } 
             return true ;// At the end we  will find  all the data of nodes are equal form both side that means  form left side and rignt side then we will return yes .  
            }
            else 
            {
                temp= prev ; 
              // slow->next=NULL; 
              ex->next=NULL ;
               while(head && temp){
                   if(head->data!=temp->data){ // Here we have done same thing as we have done above . but this code is for  even  size of linked list . 
                       return  false;
                   }
                   head= head->next; 
                   temp= temp->next; 
               }
               return true; 
            }
          
           
    }
};