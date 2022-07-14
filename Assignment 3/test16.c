/*16. Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/

#include<stdio.h>
int main()
{

    int num;
    printf("Enter the number:");
    scanf("%d", &num);
        if(num>=65 && num<=90)
             printf("Upper case ");
        else if(num>=97 && num<=122)
              printf("Lower case ");
        else  if(num>=32 && num<=47 || num>=58 && num<=64 || num>=91 && num<=96 && num>=123 && num<=126)
                        printf("Special character ");
        else
            printf("Other character ");
        return 0;
}
