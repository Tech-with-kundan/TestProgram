//6. Write a program to reverse a string.
 #include<stdio.h>
 #include<string.h>
char * ReverseString(char *s){
      int i=0;
      int j= strlen(s)-1;
       while(i<j){
          char temp= s[i];
          s[i]= s[j];
          s[j]= temp;
          i++;
          j--;
       }

  return s;
 }
 int main(void){
     char str[100];
     printf("Enter  the string ");
      fgets(str,100,stdin);
        char * c= ReverseString(str);
        printf("%s", c);


   return 0;
  }
