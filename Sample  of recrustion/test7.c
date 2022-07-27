//Write a recursive function to print squares of first N natural numbers.
#include<stdio.h>
 void print(int);
  int  main(void){
   int num;
   printf("Enter the number: ");
   scanf("%d", &num);
    print(num);


     return 0;
  }
    void print(int num){
       if(num==0)
           return ;
           print(num-1);
            printf("%d ", num*num);
    }
