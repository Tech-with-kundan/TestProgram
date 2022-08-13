/*
1. Define a function to input variable length string and store it in an array without
    memory wastage.
*/
  #include<stdio.h>
   #include<stdlib.h>
   int main()
    {
         char * p;
         int size;
         printf("Please enter the size of length: ");
         scanf("%d", &size);
          p= (char*) malloc(sizeof(char)* size) ;
          printf("Enter the string : ");

             for(int i=0; i< size ; i++)
                scanf("%c",p+i);
            printf("Input strings are : %s", p);

            // Here as we have learned free ( )  this function de-allocates the memory created by malloc and calloc .

             free(p);

         return 0;
    }
