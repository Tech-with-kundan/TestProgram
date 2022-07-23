
/*
13.  Write a program to print the  pattern like this :-
A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A

  */


      #include<stdio.h>
       int main(void){
          int a=0;
          int c=0;
          for(int i=1; i<=7; i++){
                      int k=64;
                      a=i;
              for(int j=1;j<=13; j++ ){

                    if(i==1 && j>7){

                         a=2;
                    }

                    if(j<=8-i || j>=6+a)
                    {

                           if(j<=7)
                           {
                                printf("%c ", ++k);
                           }
                           else{
                               if(i==1&& c==0){
                                   k-=1;
                                   c=1;
                               }
                             printf("%c ", k);
                            k--;
                           }

                    }

                    else
                    printf("  ");


              }
              printf("\n");




          }

           return 0;
        }
