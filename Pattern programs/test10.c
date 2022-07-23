/*

   10. write a program to print pattern like this :-
1234321
123 321
12   21
1     1


*/



#include<stdio.h>
int  main(void){

     for(int i=1; i<=4; i++){
       int k=0;
       int a=1;
       for(int j=1; j<=7; j++){
              if(j<=5-i || j>=i+3|| i==1){
                     if(j<=4)
                       printf("%d", ++k);
                       else{
                            if(i==1&& a){
                               k-=1;
                               a=0;

                            }
                       printf("%d",k--);
                       }
              }
              else
              printf(" ");
       }
       printf("\n");
     }



       return 0;
}
