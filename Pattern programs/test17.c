/*
17. Write a program to  draw the pattern like this:-
*********
 *     *
  *   *
   * *
    *


    */
      #include<stdio.h>
      int main(void){
             int x=5;
        for(int i=1; i<=5; i++){
            for(int j=1; j<=9; j++){
                    if(i==1)
                    {
                      printf("*");
                    }
                    else if(j>=i && j<=10-i)
                     {
                          if(j==i||j==10-i)
                              printf("*");
                              else
                              printf(" ");


                     }
            else
                printf(" ");

            }
            printf("\n");
        }



      }
