//10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
//function.
  #include<stdio.h>
  long long int  sum(long long int );
   int main(void){
   long long int n;
   printf("Enter the number");
   scanf("%ld", &n);
     long long int res= sum(n);
     printf("%ld", res);
    return 0 ;
   }
    long long int sum(long long  int   val){

        int fac=1;
        long long int  sum=0;
         for(int i=1; i<= val; i++){
            fac *= i;
            sum+= (fac/i);

         }
         return sum;


    }


