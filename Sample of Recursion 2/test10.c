//10. Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
 double power(double, double);
   int main(){

    double a, b;
    printf("Enter the two number ");
    scanf("%lf%lf", &a, &b);
    printf("The power of two number is %lf", power(a,b));
    return 0;


   }
    double power(double a, double b){

      if(b==0) // this is the base case  .
         return 1;
      // check for negative power
     if(b<0)
         return  1/(a/1.0) * power(a, b+1);
     else
        return a* power(a,b-1);

    }
