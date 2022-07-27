//3. Write a recursive function to print first N Even  natural numbers
#include<stdio.h>
 int  print(int);
 int  main(void){
     int num;
     printf("Enter  the number: ");
     scanf("%d", &num);
      printf("sum of N Even natural  numbers is %d ", print(num));


    return 0;
  }
     int  print(int num){

     //  base case
      if(num==0)
          return 0;

     return ( num *2 )+  print(num-1);


     }
