//5. Write a program to convert a given string into lowercase .
#include<stdio.h>
char * LowercaseString(char *s){
  for(int i=0; s[i]; i++){
     if(s[i]>=65   && s[i]<= 90){
        s[i]+= 32;
     }
  }
  return s;
 }
 int main(void){
     char str[100];
     printf("Enter  the string ");
      fgets(str,100,stdin);
        char * c= LowercaseString(str);
        printf("%s", c);


   return 0;
  }
