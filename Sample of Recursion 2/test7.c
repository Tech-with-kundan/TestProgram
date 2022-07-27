//7. Write a recursive function to calculate HCF of two numbers .
  #include<stdio.h>
  int HCF(int, int);
   int main(void){
     int num1, num2;
     printf("Enter the two number ");
     scanf("%d%d", &num1, &num2);
       printf("The HCF of two number is %d ", HCF(num1, num2));
          return 0 ;
    }
       int HCF(int a, int b){
          if(a==0)
             return b;
          if(b==0)
          return a;
          HCF(b%a, a);

       }
