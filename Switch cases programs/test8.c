/*
8. Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.
*/
  #include<stdio.h>
   int main(void){

     int num;
     printf("Enter the number ");
      scanf("%d", &num);
       switch((num>0)){
        case 1:
             printf("The positive has been changed into negative number %d", - num);
             break;
        case 0:
            printf("The Negative has been changed into positive number %d", - num);
             break;

        }



     return 0;
    }
