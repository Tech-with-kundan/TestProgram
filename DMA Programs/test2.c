/*
2. Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.
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

            // Here as we have learned free ( )  this function de-allocates the memory created by malloc and calloc .
           for(int i=0; i< size ; i++)
              printf("%d ", *(p+i));

             free(p);

         return 0;
    }
