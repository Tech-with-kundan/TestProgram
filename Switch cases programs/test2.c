/*
2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/
   #include<stdio.h>
   #include<stdlib.h>
   #include<conio.h>
   int  main(){
    int num1, num2;
     char ch;
      while(1){
      system("cls");

      printf("\na.Addition");
      printf("\nb.Subtraction");
      printf("\nc.Multiplication");
      printf("\nd.Division");
      printf("\ne.Exit");
      printf("\n\nEnter your choice: ");
       scanf("%c", &ch);

            switch(ch){


         case 'a' :
           printf("Enter the two number :");
           scanf("%d%d", &num1, &num2);
             printf("Addition is %d", num1+num2);
             getch();
               break;
         case 'b' :
           printf("Enter the two number :");
                  scanf("%d%d", &num1, &num2);
            printf("Subtraction is %d", num1 - num2);
            getch();
            break;
         case 'c' :
            printf("Enter the two number :");
             scanf("%d%d", &num1, &num2);

            printf("Multiplication is %d", num1 * num2);
             getch();
            break;
         case 'd' :
          printf("Enter the two number :");
           scanf("%d%d", &num1, &num2);
            printf("Division is %f", num1/1.0 / num2);
            getch();
            break;
         case 'e' :
            printf("Thank You \n Press any for exit.......... ") ;
            getch();
            exit(0);
         default :
            printf("Invalid choices ");


            }

      }

     return 0;
    }
