//10. Write a recursive function to print reverse of a given number

#include<stdio.h>
void reverseprint(int );
int main(void){
  int num;
  printf("Enter the number ");
  scanf("%d", &num);
  reverseprint(num);
  return 0;
}

  void reverseprint(int num){
  // base case
      if(num==0)
          return ;
       printf("%d", num%10);
       reverseprint(num/10);

  }
