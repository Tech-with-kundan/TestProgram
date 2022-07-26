//5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void natural(int n);
int main(void){
int n;
printf("Enter the number");
scanf("%d", &n);
 natural(n);


 return 0;
}
 void natural (int val){

  for(int i=1; i<=val; i++)
     printf("%d ", i);



 }
