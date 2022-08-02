//8. Write a function to count words in a given string.
#include<stdio.h>
#include<string.h>
 int  Countwords(char *s){
   int count=0;
   int i;
    for( i=0; s[i]; i++){
       if(s[i]==32 && s[i]+1!=32)
          count++;
    }
      if(s[0]==32)
        count--;
        if(s[i]==32)
        count--;
        return count ;
 }



int main(){
    char str[1000];
     printf("Enter the string ");
     gets(str);
      printf("The total words in the string is %d",Countwords(str));
  return 0;
}
