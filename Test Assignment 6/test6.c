//6. Write a program to calculate factorial of a number
  #include<stdio.h>
  int main(void){
    int fac;
    printf("Enter the number for calculating the factorial:");
    scanf("%d", &fac);
      long long int f=1;
        for(int i=1; i<=fac; i++)
             f*=i;
         printf("Factorial of number is %d ", f);


    return 0;
    }
