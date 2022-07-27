//4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
   int  print(int);
  int  main(void){
   int num;
   printf("Enter the number: ");
   scanf("%d", &num);
    printf("sum of N Square Natural  numbers is %d ", print(num));


     return 0;
  }
    int print(int num){
       if(num==0)
           return 0;
         return (num*num) +   print(num-1);

    }
