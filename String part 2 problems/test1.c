//1. Write a program to calculate the length of the string.
 #include<stdio.h>
  int StirngLength(char *s){
       int i=0;
          for( ; str[i]; i++);
    return i;
  }
  int main(){

       char str[]="BHOPAL";
       // we can also take the user input for that we have to  call the just only fgets( ) function  .
       // fgets(str, 20, stdin);

           printf("The length of string is %d", StirngLength(str));

     return 0;
   }
