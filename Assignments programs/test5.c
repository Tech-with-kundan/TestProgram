//5. Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main(void){
int n;
printf("Enter the three digits number ");
scanf("%d", &n);
int sum+= n%10;
n/=10;
sum+= n%10;
n/=10;
sum+= n%10;
printf("The sum of three digits is %d", sum);

return 0;
}
