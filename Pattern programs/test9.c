/*
9. Write a program to  draw the pattern like this:-


     1234321
      12321
       123
        1


    */
      #include<stdio.h>
      int main(void){

        for(int i=1; i<=4; ++i){
            int k=0;
            for(int j=1; j<=7; ++j){

                    if(j>=i && j<=8-i)
                         {
                             if(j<=4){
                                printf("%d", ++k);
                             }
                             else{

                                printf("%d", --k);
                             }

                         }
            else
                printf(" ");

            }
            printf("\n");
        }



      }
