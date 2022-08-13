/*
8. Write a program to demonstrate dangling pointers in C.
*/

#include<stdio.h>
#include<stdlib.h>
 int main(){


    int * a;

      {

        int num=10;   // see here inside this scope a is pointing to num variable
        a= &num  ;    // After ending this scope the pointer a will become dandling pointer .
                      // why Dangling pointer , because  the location which it was pointing ,
                      // that location will not  be  longer (exist) in the memory .
                      // But nevertheless it will contain the address of num variable .
                      // that's  why it will become Dangling pointer .
      }

  return 0;
  }
