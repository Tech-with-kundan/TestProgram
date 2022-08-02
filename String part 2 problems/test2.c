//2. Write a program to count the occurrence of a given character in a given string.
 #include<stdio.h>
 int main(void){

  char str[100];
  printf("Enter the string:");
   fgets(str,100, stdin);
     char ch;
     printf("Enter the character:");
      scanf("%c", &ch);
        int count=0;
       for(int i=0; str[i]; i++){
         if(str[i]== ch){
            count++;
         }
       }
          printf("The total counting of occurrence of this character is %d  ", count);


   return 0;
  }
