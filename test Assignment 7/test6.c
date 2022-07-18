//6. Write a program to print all Prime numbers under 100
#include<stdio.h>
#include<math.h>
int main(void){

  for(int i=2; i<=100; i++){
               int j;
         for( j=2; j<=sqrt(i); j++){
            if(i%j==0)
                 break;
         }
         int d=sqrt(i);
         if(j-1==d)
            printf("%d ", i);

  }
 return 0;
 }
