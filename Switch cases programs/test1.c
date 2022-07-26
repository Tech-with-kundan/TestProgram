//1. Write a program which takes the month number as an input and display
//number of days in that month.
 #include<stdio.h>
 int  main(void){
      int month;
      printf("Enter the month number: ");
      scanf("%d", &month);
         switch(month){
       case 1:
           printf("Days is %d", 31);
         break;
         case 2:
           printf("Days is %d", 28);
         break;
         case 3:
           printf("Days is %d", 31);
         break;
         case 4:
           printf("Days is %d", 30);
         break;
         case 5:
           printf("Days is %d", 31);
         break;
         case 6:
           printf("Days is %d", 30);
         break;
        case 7 ... 8 :
           printf("Days is %d", 31);
         break;
         case 9:
           printf("Days is %d", 30);
         break;
         case 10:
           printf("Days is %d", 31);
         break;
         case 11:
           printf("Days is %d", 30);
         break;
         case 12:
           printf("Days is %d", 31);
         break;

       default:
         printf("Invalid month number ");
         }

   return 0;
  }
