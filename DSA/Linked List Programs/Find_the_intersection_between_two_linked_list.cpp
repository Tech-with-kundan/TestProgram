/*
Given two singly linked lists of size N and M,
 write a program to get the point where two linked lists intersect each other.
Example 1:

Input:
LinkList1 = 3->6->9->common
LinkList2 = 10->common
common = 15->30->NULL
Output: 15
Explanation:
Y ShapedLinked List



Example 2:

Input: 
Linked List 1 = 4->1->common
Linked List 2 = 5->6->1->common
common = 8->4->5->NULL
Output: 8
Explanation: 

4              5
|              |
1              6
 \             /
  8   -----  1 
   |
   4
   |
  5
  |
  NULL       


*/
// Let's see the  implementation 

 class Linked{
    public :
int getlength(Node * head1){
     int len=0; 
      while(head1){
          len++;
          head1= head1->next; 
      }
      return len; 
 }
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    // the idea is very simple we have to just find the length the both linked list
    // if we  find the head1 is greater than  head2 
    // then we will find the difference   and we will move the link of head1 till differnecr . 
    int length1=  getlength(head1);
    int length2= getlength(head2);
    int diff=0; 
    Node *  Link=NULL ; //    I have taken these two pointer for traversing   to get answer . 
    Node * ans= NULL; 
     if(length1 > length2){
       diff= length1- length2; 
       Link= head1;
       ans= head2; 
         //diff--; 
         while(diff--){
             Link=Link->next; 
         }
          while(Link!=ans){
              Link=Link->next; 
              ans= ans->next; 
          }
          return Link->data; 
         
         
         
     }
     else{
          diff= length2- length1; 
         Link= head2; 
         ans= head1;
          //diff--;
          while(diff--){
               Link= Link->next; 
          }
        while(Link!= ans){
              Link=Link->next; 
              ans= ans->next; 
          }
          return Link->data; 
     }
}
};
