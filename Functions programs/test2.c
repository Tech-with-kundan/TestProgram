//2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
 float simpleinterest(int , int , int );
 int main(void){

   int p, r, t;
  printf("enter the value of p, r, t ");
  scanf("%f", &radius);
  printf("%f", simpleinterest());
  return 0;


 }
   float simpleinterest(int p, int r , int t){
      return ((p*r*t)/1.0 )/ 100;
   }
