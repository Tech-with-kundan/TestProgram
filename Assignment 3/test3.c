/*3. Write a program to check whether a given number is an even number or an odd
number.
*/
  #include<stdio.h>
  int main(void){
   int num;
   printf("Enter the number::");
   scanf("%d", &num);
   if(num&1)
    printf("%d is odd number", num);
   else
    printf("%d  is even number ", num);
  return 0;
  }
