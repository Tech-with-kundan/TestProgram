//1. Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int  main(void){
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  int prev1=1;
  int prev2=0;
  for(int i=3; i<=n; i++)
  {
      int c=prev1+prev2;
        prev2=prev1;
        prev1=c;
  }
  printf("The nth term of Fibonnaci series is %d", prev1);

return 0;
}
