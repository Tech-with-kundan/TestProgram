//12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main(void){
  char ch;
  printf("Enter the Alphabet character :");
  scanf("%c", &ch);
   if(ch>=65 && ch<=90)
      printf("Upper case ");
   else
    printf("Lower case ");
return 0;
}
