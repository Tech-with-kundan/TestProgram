//8. Write a recursive function to print binary of a given decimal number
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
       print(num/2);
       printf("%d ", num % 2);

  }


