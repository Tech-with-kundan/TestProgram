//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main(void){
 int num;
 printf("Enter the number:");
 scanf("%d", &num);
   if(num%6==0 && num%2==0)
         printf("%d is divisible by 6  and 2 ",num);
   else
    printf("%d is not divisible by 6  and 2 ", num);


return 0;
}
