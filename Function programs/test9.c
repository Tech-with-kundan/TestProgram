//9. Write a program in C to find the square of any number using the function.
#include<stdio.h>
int  square(int n);
int main(void){
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    printf("The square of a number is %d ", square(n));
 return 0;
}
 int square(int val){

     return val * val;
    }
