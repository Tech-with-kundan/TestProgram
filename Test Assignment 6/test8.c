//8. Write a program to check whether a given number is a Prime number or  not .
#include<stdio.h>
#include<math.h>
int main(void){
 int num;
  printf("Enter the number for checking it is prime or not : ");
    scanf("%d", &num);
     int i;
     for( i=2; i<=sqrt(num); i++)
     {

         if(num%i==0)
         {

             break;
         }
     }
       int d= sqrt(num);
     if(i-1== d)
         printf("%d is a prime number ");
     else
        printf("%d is not a prime number ");


   return 0;

}
