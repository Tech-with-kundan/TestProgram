/*18. Write a program which takes the month number as an input and display number of
days in that month*/
#include<stdio.h>
int main(void){
 int month;
  printf("Enter the month the number:");
  scanf("%d", &month);
   if(month==1)
   {
       printf(" Month  :- January\n Days:- 31 ");
   }
   else  if(month==2)
   {
       printf(" Month  :- Febuary\n Days:- 28 ");
   }
   else  if(month==3)
   {
       printf(" Month  :- March\n Days:- 31 ");
   }
   else  if(month==4)
   {
       printf(" Month  :- April\n Days:- 30 ");
   }
   else  if(month==5)
   {
       printf(" Month  :- May\n Days:- 31 ");
   }
   else  if(month==6)
   {
       printf(" Month  :- June\n Days:- 30 ");
   }
   else  if(month==7)
   {
       printf(" Month  :- July\n Days:- 31 ");
   }
   else  if(month==8)
   {
       printf(" Month  :- August\n Days:- 31 ");
   }
   else  if(month==9)
   {
       printf(" Month  :- September\n Days:- 30 ");
   }
   else  if(month==10)
   {
       printf(" Month  :- October\n Days:- 31 ");
   }
   else  if(month==11)
   {
       printf(" Month  :- November\n  Days:- 30 ");
   }
   else  if(month==12)
   {
       printf(" Month  :- December\n  Days:- 31 ");
   }
return 0;
}
