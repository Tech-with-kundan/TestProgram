/*
9. Write a program to allocate memory dynamically of the size in bytes entered by the
  user. Also handle the case when memory allocation is failed.
*/

#include<stdio.h>
   #include<stdlib.h>
   int main()
    {
         int  * p;
         int size;
         printf("Please enter the size of length: ");
         scanf("%d", &size);
          p= (int*) malloc(sizeof(int )* size) ;


           if(p==NULL)
           {
               printf("Sorry the memory has not been allocated ");
           }
           else
           {
               printf("Yes  the memory has  been allocated ");
               printf("\nEnter the number as you wish to  give :");
               scanf("%d", p);
               printf("The number is : %d", *p);

           }

             free(p);

         return 0;
    }
