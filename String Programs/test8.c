// Online C compiler to run C program online
//8. Write a program in C to copy one string to another string.
 #include<stdio.h>
 #include<string.h>
  char * CopyTwoString(char *c1, char *c2){
          int i= strlen(c1);
          for(int j=0;  c2[j]; j++)
              c1[i++]= c2[j];
              c1[i]= '\0';
              return c1;

  }
  int main(void){
   char str[100];
   char st[100];
   printf("Enter the string ");
   fgets(str,100,stdin);
   printf("Enter the another string ");
   fgets(st,100,stdin);
      char *c= CopyTwoString(str,st);
   printf("After the copying the string is %s", c);

    return 0;
   }
