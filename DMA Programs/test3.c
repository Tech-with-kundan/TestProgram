/*
3. Write a program to calculate the sum of n numbers entered by the user using malloc
   and free.
*/

#include<stdio.h>
   #include<stdlib.h>
   int main()
    {
         int  * p;
         int size;
         printf("Please enter the size of length: ");
         scanf("%d", &size);
          p= (int *) malloc(sizeof(int)* size) ;
          printf("Enter the string : ");

             for(int i=0; i< size ; i++)
                scanf("%d",p+i);

            int sum=0;
           for(int i=0; i< size ; i++)
               sum+= *(p+i);
               printf("The sum of all the numbers is %d", sum);

             free(p); // free the memory  location .

         return 0;
    }
