
/*12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/
#include<stdio.h>
int main(void)
{
     float money ;
     printf("Enter the money INR:");
     scanf("%f", &money);
     float USD=money/ 76.23;
     printf("The USD Dollar money is $%f ", USD);
    return 0;
}

