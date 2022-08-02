//6. Write a program to reverse a string.
 #include<stdio.h>
 #include<string.h>
  int checkpalindrome(char *s){
     int i=0;
     int j= strlen(s)-1;
      while(i<j){
        if(s[i]!=s[j])
          return 0;
          if(i>j)
           break;
            i++; j--;
      }
    return 1 ;


  }



 int main(void){
     char str[100];
     printf("Enter  the string ");
      gets(str);
        if(checkpalindrome(str))
             printf("Yes it is palindrome ");
        else
            printf("It is not palindrome ");


   return 0;
  }
