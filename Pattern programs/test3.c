/*  3.write a program to draw the pattern like this .
 *****
 ****
 ***
 **
 *

 */
 #include<stdio.h>
   int main(void){
           for(int i=1; i<=5; i++){
              for(int j=1; j<=5;  j++){
                   if(j<=6-i)
                      prinf("*");
                   else
                    printf(" ");
              }
              printf("\n");
           }


         return 0;
    }
