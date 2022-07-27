// 2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
 int  print(int);
 int  main(void){
     int num;
     printf("Enter  the number: ");
     scanf("%d", &num);
      printf("sum of N odd natural  numbers is %d ", print(num));


    return 0;
  }
     int  print(int num){

     //  base case
      if(num==0)
          return 0;

     return ( num *2 -1 ) +  print(num-1);


     }
