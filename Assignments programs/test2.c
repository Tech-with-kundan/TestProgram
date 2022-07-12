//2. Write a program to print a given number without its last digit.
#include<stdio.h>
int main(void)
{
     int n;
     printf("Enter the number:");
     scanf("%d", &n);
     printf("Without last digit the number is %d", n/10);
    return 0;
}
