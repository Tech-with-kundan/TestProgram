/*
 15. write a program to draw a pattern like this :-

        *
      * *
    *   *
  *     *
* * * * *


  */
   #include<stdio.h>
   int main(void){
    int x=5;

      for(int i=1; i<=5; i++){

          for(int j=1; j<=5; j++){
             if(i==5)
               printf("* ");
               else if(j>=6-i){
                     if(j==x || j==5)
                      printf("* ");
                   else
                   printf("  ");
               }
                 else
                 printf("  ");

          }
          printf("\n");
          x--;



      }


       return 0;
   }
