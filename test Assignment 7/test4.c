//4. Write a program to calculate HCF of two numbers
#include<stdio.h>
int  main(void){
 int num1, num2;
 printf("Enter the two number ");
 scanf("%d%d", &num1, &num2);
 int HCF;
  for(int i=1; i<=num1 && i<=num2; i++){
    if(num1%i==0 && num2%i==0)
    {
         HCF=i;
    }
  }
  printf("The HCF of two number is : %d", HCF);


 return 0;
 }
