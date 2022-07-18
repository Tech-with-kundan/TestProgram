//3. Write a program to check whether a given number is there in the Fibonacci
//series or not.
#include<stdio.h>
int main(void){

 int n;
 printf("Enter the number:");
 scanf("%d", &n);
 int a=-1, b=1;
 int a1=0;
   for(int i=1; i<=n; i++){
    int c= a+b;
     if(c==n)
     {
         a1=1;
         break;
     }
     a=b;
     b=c;
   }
       if(a1)
       {
           printf("%d Yes Number is present in this fibonacci series", n);
       }
       else
       {
           printf("%d Not present in  it fibonacci series ", n);
       }



  return 0;
 }
