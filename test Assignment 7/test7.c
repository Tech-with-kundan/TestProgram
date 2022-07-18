//7. Write a program to print all Prime numbers between two given numbers.
#include<stdio.h>
int main(void){
    int num1, num2;
    printf("Enter the two number :");
    scanf("%d%d", &num1, &num2);
    for(int i=num1; i<=num2; i++){
               int j;
         for( j=2; j<=sqrt(i); j++){
            if(i%j==0)
                 break;
         }
         int d=sqrt(i);
         if(j-1==d)
            printf("%d ", i);
    }


  return 0;
 }
