/*
7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/
   #include<stdio.h>
    int  main(void){
          int  unit ;
         printf("Enter the electricity unit ");
          scanf("%d", & unit);
            switch(unit){
             case 1 ... 50 :
                  printf("Your total  electricity bill is %f", unit * 0.50);
                    break;
             case  51 ... 150 :
                 printf("Your total  electricity bill is %f", unit * 0.75);
                    break;
             case  151 ... 250 :
                printf("Your total  electricity bill is %f", unit * 1.20);
                    break;
                    default :
                         printf("Your total  electricity bill is %f", unit * 1.50);
                          break;
            }

       return 0;
    }
