//8. Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main(void){
 int year;
 printf("Enter the year ::");
 scanf("%d", &year);
               if(year%400==0 || year%100 != 0 && year % 4 == 0)
                            printf("Leap Year");
               else
                  printf("Not Leap year");
return 0;
}
