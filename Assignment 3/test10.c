/*10. Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.*/
#include<stdio.h>
 int main(void){
 int costprice;
 int sellingprice ;
 printf("Enter the cost price and selling price :");
 scanf("%d%d", &costprice, &sellingprice);
 float profit= sellingprice - costprice ;
     if(sellingprice> costprice)
     {
          profit= (profit/1.0)/costprice * 100 ;
          printf("The is profit is%  %f", profit);

     }
     else
     {
        profit= (profit/1.0)/costprice * 100 ;
          printf("The is loss is % %f", profit);

     }

 return 0;
 }

