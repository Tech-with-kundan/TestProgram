//6. Write a program to calculate the length of the string using a pointer.
#include<stdio.h>
int Strlen(char * c){

   int i;
   for( i=0; c[i]!='\0' ; i++);
   return i;
}

int main(){

 char str[100];
  printf("Enter the length of string:");
  gets(str);
   printf("The length of string is %d ",  Strlen(str));
   return 0;
 }
