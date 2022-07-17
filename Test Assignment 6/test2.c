//2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
 int main(void){
  int n;
 printf("Enter the number");
 scanf("%d", &n);
    int sum=0;
    for(int i=1; i<=n; i++)
         sum= sum+ i*2;
    printf("sum of first N even natural numbers is %d ", sum);

  return 0;
 }
