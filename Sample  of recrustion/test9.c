// 9. Write a recursive function to print octal of a given decimal number.
#include<stdio.h>
 void print(int );
int main(void){
  int num;
  printf("Enter the number ");
  scanf("%d", &num);
  print(num);
  return 0;
}

  void print(int num){
  // base case
      if(num==0)
          return ;
       print(num/8);
       printf("%d ", num % 8);

  }
