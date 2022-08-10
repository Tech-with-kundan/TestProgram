//10. Write a program to print a string in reverse using a pointer
#include<stdio.h>
#include<string.h>
   char * ReverseString(char *c){
        int size= strlen(c);
        int j= size-1;
        int i=0;
        while(i<j){

            char temp= c[i];
            c[i]= c[j];
            c[j]= temp;
            i++;
            j--;
        }
        return c;
   }
int main(){
 char str[100];
 printf("Enter the string : ");
 fgets(str, 100, stdin);
 printf("Reverse string is %s", ReverseString(str));
 return 0;
 }
