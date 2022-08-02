//6. Write a program to reverse a string.
 #include<stdio.h>
 #include<string.h>
  int checkalnum(char *s){
    for(int i=0; s[i]; i++)
    {

        if(s[i] >= 97 && s[i] <= 122)
             return 1;
        else  if(s[i] >= 65 &&  s[i] <= 90)
           return 1;
         else if(s[i] >= 48 && s[i] <= 57)
             return 1;

    }
    return 0 ;


  }



 int main(void){
     char str[100];
     printf("Enter  the string ");
      fgets(str,100,stdin);
        if(checkalnum(str))
             printf("Yes it is alphanumaric ");
        else
            printf("It is not alphanumaric");


   return 0;
  }
