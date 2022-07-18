//2. Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main(void){
  int n;
  printf("Enter the number:");
  scanf("%d", &n);
  int a=-1, b=1;
  for(int i=1; i<=n; i++)
  {
      int c=a+b;
      printf("%d ",c);
      a=b;
      b=c;
  }


return 0;
 }
