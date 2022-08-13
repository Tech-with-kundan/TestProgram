/*
4. Write a program to input and print text using dynamic memory allocation.
*/
  #include<stdlib.h>
  #include<stdio.h>
  int main()

  {
      int text;
       printf("Enter  the size of text : ");
       scanf("%d", &text);
       char  *ch= (char*) malloc(sizeof(char)* text);
         for(int i=0; i< text; i++)
             scanf("%c", ch+i);
         printf("The text is %s", ch);
         free(ch);
       return 0;
  }
