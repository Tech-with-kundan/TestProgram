/*
1.Write a program to draw the following patterns:
*
**
***
****
*****
*/
#include<stdio.h>
int  main(void){
     for(int i=1; i<=5; i++){ // this  outer loop for responsible for  number of row.
             for(int j=1; j<=5; j++){
                  if(j<=i)
                    printf("*");
                  else
                    printf(" ");
             }
             printf("\n");

     }


  return 0;
 }
