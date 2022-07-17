//10. Write a program to print a table of N.
#include<stdio.h>
int main(void){
    int N;
    printf("Enter the number as you want to print the table  :");
    scanf("%d", &N);
 for(int i=1; i<=10; i++)
      printf("%d\n", N*i);

return 0;
}
