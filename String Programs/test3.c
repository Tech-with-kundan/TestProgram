//3. Write a program to count vowels in a given string.
#include<stdio.h>
  int IsVowel(char ch){
    if(ch=='a'|| ch=='A')
         return 1;
    else if(ch=='e'|| ch=='E')
         return 1;
    else if(ch=='i' || ch=='I')
         return 1;
    else if(ch=='o'|| ch=='O')
          return 1;
    else if(ch=='U' || ch=='u')
          return 1;
    else
        return 0;
  }
 int main(void){

    char str[100];
    printf("Enter the string:");
    fgets(str,100, stdin);
     int count=0;
      for(int i=0;  str[i]; i++){
             if(IsVowel(str[i]))
                  count++;
      }
       printf("The total number of vowel is present in this string is %d ", count);

   return 0;
  }
