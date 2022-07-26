/*
4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/


 #include<stdio.h>
   #include<stdlib.h>
   #include<conio.h>
   int  main(){
    int num1, num2, num3;
     char ch;
      while(1){
      system("cls");

      printf("\na.isosceles triangle or not");
      printf("\nb.right angled triangle or not");
      printf("\nc.equilateral triangle or not");
      printf("\nd.Exit");
      printf("\n\nEnter your choice: ");
       scanf("%c", &ch);

            switch(ch){


         case 'a' :
           printf("Enter the three angles of triangle  :");
           scanf("%d%d%d", &num1, &num2, &num3);
             if(num1 == num2 || num3 == num1 || num2 == num3)
             printf("isosceles triangle");
             else
                printf("Not isosceles triangle");
             getch();
               break;
         case 'b' :
           printf("Enter the three angles of triangle  :");
          scanf("%d%d%d", &num1, &num2, &num3);
             if(num1 == 90 || num3 == 90 || num2 == 90)
             printf("Right triangle");
             else
                printf("Not Right triangle");
             getch();
            break;
         case 'c' :
            printf("Enter the three angles of triangle  :");
          scanf("%d%d%d", &num1, &num2, &num3);
             if(num1 == num2 &&  num3 == num1 )
             printf(" equilateral triangle");
             else
                printf("Not equilateral triangle");
             getch();
            break;

         case 'd' :
            printf("Thank You \n Press any for exit.......... ") ;
            getch();
            exit(0);
         default :
            printf("Invalid choices ");


            }

      }

     return 0;
    }

