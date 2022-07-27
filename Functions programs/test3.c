//3. Write a function to check whether a given number is even or odd. Return 1 if the
//number is even, otherwise return 0. (TSRS)
#include<stdio.h>
 int checkeven_odd(int);
 int main(){
  int n;
  peintf("Enter  the number ");
  scanf("%d", &n);
  if( checkeven_odd(n))
     printf("Even ");
  else
    printf("Odd");
   return 0;
  }
    int  checkeven_odd(int n){

     if(n&1)
         return 0;
     return 1;
    }
