
/*
 12. Write a program to print the  pattern like this :-
 A B C D C B A
   A B C B A
     A B A
       A


  */


      #include<stdio.h>
       int main(void){
          int a=0;
          int c=0;
          for(int i=1; i<=4; i++){
                      int k=64;

              for(int j=1;j<=7; j++ ){
                   if(j>=i  &&  j<=8-i)
                    {

                           if(j<=4)
                           {
                                printf("%c ", ++k);
                           }
                           else{
                               k--;
                             printf("%c ", k);

                           }

                    }

                    else
                    printf("  ");


              }
              printf("\n");




          }

           return 0;
        }
