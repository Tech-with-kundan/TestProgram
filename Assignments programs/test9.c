/*10. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/
#include<stdio.h>
int main(void){
int n;
printf("Enter the number :");
scanf("%d", &n);
n/=10;
n*=10;
printf("After changing the last digit of number into zero  is %d ", n);
return 0;
}
