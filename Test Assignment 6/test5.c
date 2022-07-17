//5. Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main(void){
        int N;
    printf("Enter the number  :");
    scanf("%d", &N);
    long long int  sum=0;
    for(int i=1;i<=N; i++)
        sum= sum+ i*i*i;
    printf("sum of cubes of first N  natural number is %d ", sum);


 return 0;
}

