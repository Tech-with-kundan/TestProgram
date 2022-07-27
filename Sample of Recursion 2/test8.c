
//8. Write a recursive function to print first N terms of Fibonacci series .
  #include<stdio.h>
  void fib(int, int , int );
   int main(){
       int num;
       printf("Enter the number: ");
       scanf("%d", &num);

          fib(num, -1, 1);

       return 0;
     }
   void fib(int num, int a, int b ){

             // base case
              if(num==0)
                return ;
                int c = a+b;
                printf("%d ", c);
                fib(num-1, b, c);

       }

