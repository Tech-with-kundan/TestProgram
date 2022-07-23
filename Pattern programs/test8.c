/*
8. Write a program to  draw the pattern like this:-
        1
       123
      12321
     1234321


    */
      #include<stdio.h>
      int main(void){

        for(int i=1; i<=4; ++i){
            int k=0;
            for(int j=1; j<=7; ++j){

                    if(j>=5-i && j<=4+i-1)
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
