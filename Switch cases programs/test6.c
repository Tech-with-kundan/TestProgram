//6. Program to check whether a year is a leap year or not. Using switch
//statement

   #include<stdio.h>
    int main(void){
      int year;
      printf("Enter the year");
      scanf("%d", &year);
        switch( ( year % 100 !=0 && year %  4 == 0 ) || ( year % 400 == 0  )){

         case  1:
           printf(" leap year");
           break;
           case 0 :
           printf(" NOT Leap year");
           break;

         default:
         printf("Invalid year");


        }

      return 0;
    }
