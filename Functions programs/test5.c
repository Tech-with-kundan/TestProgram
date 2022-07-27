//5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
  void print(int n);
 int main(void){
  int n;
  printf("Enter the number ");
  scanf("%d", &n);
  print(n);

 }
   void print(int n){

    for(int i=1; i<=n; i++){
        printf("%d ", i*2);
    }

   }
