//7. Write a program in C to count the total number of alphabets, digits and special
//characters in a string.
#include<stdio.h>
int alphabet(char ch){
     if(ch>=97 && ch<=122 || ch>=65 && ch<=90){
         return 1;
     }
     else
     return 0;
}
  int digit(char ch){
      if(ch>=48 && ch<=57)
         return 1;
         else
         return 0;
  }



int main(void){
     char str[100];
     printf("Enter  the string ");
      fgets(str,100,stdin);
          int alph=0;
          int digi=0;
          int special=0;
           for(int i=0;  str[i]; i++){
             if(alphabet(str[i]))
                  alph++;
              else  if(digit(str[i]))
                 digi++;
               else
                special++;
              }

              printf("The alphabet number is %d\n", alph);
              printf("The digit  number is %d \n", digi);
              printf("The special number is %d \n", special);
   return 0;
  }
