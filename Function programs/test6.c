//6. Write a function to print all Prime numbers between two given numbers. (TSRN)

#include<stdio.h>
int prime(int);
int main(void){

 int num1, num2;
 printf("Enter the number");
 scanf("%d%d", &num1, &num2);
    for(int i=num1; i<=num2; i++){
   if(prime(i)){
     printf(" %d ", i);

   }
 }

 return 0;

}

 int prime(int num){

  if(num==2 || num==3){
    return 1;
  }
    else if(num%2==0 || num%3==0)
          return 0;


    else {
            for(int i=5; i*i<= num; i+= 6){
                 if(num % i==0 || num % (i+2)==0)
                        return 0;
            }
            return 1;

    }
 }
