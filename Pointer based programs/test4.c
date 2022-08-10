//4. Write a program in C to demonstrate how to handle the pointers in the program.
#include<stdio.h>
int main(){
/** What is pointer ?
    Pointer is special variable which contains the address of another variable .
    ** Types of pointer **
     void pointer, NULL pointer, dangling pointer, uninitialized pointer .
   **** how to declare pointer ****
   ** it is very simple  as we  declare a normal similarly we can also declare the pointer variable , but
       here is one catch while declaring the pointer variable we will have to  give the *  star symbol . It
       will be sign of special variable . When we declare like this then compiler recognizes that  is the
       special variable .
       let's see the syntax of pointer 's variable declaration .
       int * a ; // here a is int type pointer .
       float * f ; // here f is float type  pointer .
       char * c ;  // c is the char type pointer  .
       double d ;  // d is the double type pointer .

*/
            int num ; // this is normal (ordinary variable)
          int * a ;  // this is special ( pointer variable)
           num = 100;
           a= &num ;
           int ** b=&a;
           int *** c= &b;
           int **** d= &c ;
           int *****e= &d ;
           printf(" the value of  num %d \n ", num);
           printf(" the address of num %u\n", &num);
           printf(" the value   of num which is pointed by a %d\n", *a);
           printf(" the address of num which is pointed by a %u\n", a);
           printf(" the value of num %d\n", **b);
           printf("the address of num %u\n", *b);
           printf(" the valude of num %d\n", ***c);
           printf(" the address of b %u\n", **c);
           printf("the valude of num %d\n", ****d);
           printf("the address of num %u\n", ***d);
           printf("the value of num  %d\n", *****e);
           printf("the address of a is %u\n", ****e);
           printf("the address of b is %u\n", ***e);
           printf("the address of c is %u\n", **e);
           printf("the address of d is %un\n", *e);



return 0;
 }
