//4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int prime(int);
int main(void){

 int num;
 printf("Enter the number");
 scanf("%d", &num);
    for(int i=num+1 ; i<=i+1; i++){
   if(prime(i)){
     printf("The  next Prime Number is %d ", i);
     break;
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
