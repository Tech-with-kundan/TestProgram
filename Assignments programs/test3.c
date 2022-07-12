//3. Write a program to swap values of two int variables
#include<stdio.h>
int main(void){
int n1,n2;
prinf("Enter the two number :");
scanf("%d%d", &n1, &n2);
printf("before swapping  first number %d \n second number %d\n", n1, n2);

int temp= n1;
n1=n2;
n2= temp ;
printf("After swapping  first number %d \n second number %d", n1, n2);
return 0;
}
