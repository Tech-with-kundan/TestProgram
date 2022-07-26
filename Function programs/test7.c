//7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>

 void fib(int);
int  main(void){
  int n;
  printf("Enter the number");
  scanf("%d", &n);
   fib(n);

  return 0;
 }

  void fib(int n ){


      int a=-1, b=1;
       for(int i=1; i<=n; i++){
         int c= a+b;
           a=b ;
           b=c;
           printf("%d ", c);
       }


  }
