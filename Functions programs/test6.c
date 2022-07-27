//6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
 long long  int fact(long long int n);
 int main(void){
  long long int n;
  printf("Enter the number ");
  scanf("%ld", &n);
  printf("Factorial of number is %ld ", fact(n));

 }
   long long int  fact(long long int n){
      long lont int ans=1;
    for(int i=1; i<=n; i++){
         ans*= i;
    }

   }
