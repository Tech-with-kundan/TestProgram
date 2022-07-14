//5. Write a program to check whether a given number is a three-digit number or not.
  #include<stdio.h>
  int main(void){
      int num;
      printf("Enter the number::");
      scanf("%d", &num);
      if(num>=111 && num<=999)
        printf("%d is three digit number ", num);
      else
        printf("%d is not three digit number " , num);
  return 0;
  }
