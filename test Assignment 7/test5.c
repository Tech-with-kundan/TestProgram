//5. Write a program to check whether two given numbers are co-prime
// numbers or not .
#include<stdio.h>
int main(void){
 int num1, num2 ;
 printf("Enter the two number :");
 scanf("%d%d", &num1, &num2);
    int HCF;
     for(int i=1; i<=num1 && i<=num2 ; i++){
        if(num1%i==0 && num2%i==0)
                HCF=i;
     }
             if(HCF==1)
                 printf("%d and %d both numbers are co-prime number ", num1,num2);
             else
              printf("%d and %d both numbers are not co-prime number ", num1, num2);


 return 0;
 }
