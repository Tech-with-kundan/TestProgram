/*
 7. Write a program to print the start pattern like this :-
   12345678910  column
  1 **********
  2 ****  ****
  3 ***    ***
  4 **      **
  5 *        *

  */


      #include<stdio.h>
       int main(void){
          for(int i=1; i<=5; i++){

              for(int j=1;j<=10; j++ ){

                  if(j>=i && j>=5+i)
                      printf("*");
                  else
                    printf(" ");

              }
              printf("\n");




          }

           return 0;
        }
