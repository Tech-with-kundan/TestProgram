//4. Write a program to convert a given string into uppercase .
#include<stdio.h>
  char *  Upperstring(char *s){
      for(int i=0; s[i]; i++){
          if(s[i]>=97 && s[i]<=122){
            s[i]= s[i] - 32;
          }
      }
      return s;

  }
  int main(void){

   char str[100];
   printf("Enter the string ");
    fgets(str, 100, stdin);
    char *ch= Upperstring(str);
     printf("%s", ch);

     return 0;
   }
