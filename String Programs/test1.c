//1. Write a program to calculate the length of the string. (without using built-in method)
 #include<stdio.h>
  int main(){

       char str[]="BHOPAL";
       // we can also take the user input for that we have to  call the just only fgets( ) function  .
       // fgets(str, 20, stdin);
        int i=0;
          for( ; str[i]; i++);
           printf("The length of string is %d", i);

     return 0;
   }
