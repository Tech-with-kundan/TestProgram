/*11. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/
#include<stdio.h>
int main(void){
    int n;
    int digit;
    printf("Enter the number and digit :");
    scanf("%d%d", &n, &digit);
    n*=10;
    n=n+ digit;
    printf("The resulting number is %d", n);
return 0;
}
