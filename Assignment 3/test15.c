//15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main(void){
 int num;
 printf("Enter the number:");
 scanf("%d", &num);
  if(num==0)
     printf("Number is zero");
  else if(num>0)
     printf("Number is positive ");
  else printf("Number is Negative");

return 0;
}
