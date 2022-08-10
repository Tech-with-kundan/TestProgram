//5. Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>
int main(){

  int num1, num2;
  printf("Enter the tow number:");
  scanf("%d", &num1, &num2);
  int *n1=&num1;
  int  * n2= & num2;
     if(*n1>*n2)
     {

         printf("%d num1 is greater ", *n1);
     }
     else
     {

         printf("%d num2 is greater ", *n2);
     }
     return 0;
}
