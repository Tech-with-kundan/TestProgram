//10. Write a program to reverse a given number
#include<stdio.h>
int main(void)
{

    int num;
    printf(" Enter the number: ");
    scanf("%d", &num);
     int rev=0;
      while(num!=0){
        int rem= num%10;
        rev= rev*10 + rem ;
        num/=10;
      }
       printf("The reverse number is %d", rev);
       return 0;

}
