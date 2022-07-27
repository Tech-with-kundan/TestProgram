//6. Write a recursive function to calculate factorial of a given number
#include<stdio.h>
   int  fact(int);
  int  main(void){
   int num;
   printf("Enter the number: ");
   scanf("%d", &num);
    printf("Factorial of given number  %d ", fact(num));


     return 0;
  }
    int fact(int num){
       if(num==0|| num==1)
           return 1;
         return num *   fact(num-1);

    }
