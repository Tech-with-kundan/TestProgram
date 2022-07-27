//5. Write a recursive function to calculate sum of digits of a given number
 #include<stdio.h>
 int  Sumofdigit(int);
 int  main(void){
     int num;
     printf("Enter  the number: ");
     scanf("%d", &num);
      printf("sum of Digit of   numbers is %d ",  Sumofdigit(num));


    return 0;
  }
     int   Sumofdigit(int num){

     //  base case
      int sum=0;
      if(num==0)
          return 0;
      int digit= num % 10 ;
       sum+= digit;

         return sum +Sumofdigit(num/10);






     }

