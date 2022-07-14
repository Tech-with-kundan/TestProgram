//8. Write a program to check whether the given number is even or odd using a bitwise operator
#include<stdio.h>
int main(void){
int n;
printf("Enter the number : ");
scanf("%d", &n);
if(n&1)
    printf("%d is odd number ", n);
else
    printf("%d is even number ", n);
return 0;
}
