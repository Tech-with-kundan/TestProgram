//3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int prime(int);
int main(void){

 int num;
 printf("Enter the number");
 scanf("%d", &num);
 if(prime(num))
     printf("Prime");
 else
    printf("NOt prime");
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
