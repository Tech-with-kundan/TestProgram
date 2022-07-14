//1. Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main(void){
    int num;
    printf("Enter the number::");
    scanf("%d", &num);
    if(num<=0)
         printf("Non Positive");
     else
        printf("Positive");
 return 0;
}
