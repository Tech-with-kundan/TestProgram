//4. Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void print(int);
int main(void){
 int num;
 printf("Enter the number :");
   scanf("%d", &num);
    print(num);


  return 0;
 }
   void print(int num){

      if(num==0)
          return ;
            printf("%d ", num*2-1);
             print(num-1);



   }
