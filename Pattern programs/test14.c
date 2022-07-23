/*
write a program to draw a pattern like this :-

*
* *
*   *
*     *
* * * * *


  */
   #include<stdio.h>
   int main(void){
      printf("* \n");
      for(int i=2; i<=5; i++){
              printf("* ");
          for(int j=2; j<=5; j++){
             if(i==5)
               printf("* ");
               else if(i==j){
                 printf("* ");
               }
                 else
                 printf("  ");

          }
          printf("\n");



      }


       return 0;
   }
