
/*
11.  Write a program to print the  pattern like this :-
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A

  */


      #include<stdio.h>
       int main(void){
          int a=0;
          int c=0;
          for(int i=1; i<=5; i++){
                      int k=64;

              for(int j=1;j<=9; j++ ){
                   if(j>=6-i &&  j<=4+i)
                    {

                           if(j<=5)
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
