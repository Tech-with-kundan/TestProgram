//7. Write a program to count digits in a given number

#include<stdio.h>
int main(void){
  int num;
  printf("Enter the number:");
  scanf("%d", &num);
    int count=0;
      for(; num!=0; count++)
           num/=10;
        printf("The total digits of this number is %d ", count);


return 0;
}
