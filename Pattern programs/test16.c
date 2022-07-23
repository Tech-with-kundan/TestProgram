/*
16. Write a program to  draw the pattern like this:-
    *
   * *
  *   *
 *     *
*********


    */
      #include<stdio.h>
      int main(void){

        for(int i=1; i<=5; i++){
            for(int j=1; j<=9; j++){
                    if(i==5)
                    {
                      printf("*");
                    }
                    else if(j>=6-i && j<=4+i)
                     {
                          if(j==6-i||j==4+i)
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
