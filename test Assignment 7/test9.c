//9. Write a program to check whether a given number is an Armstrong number or not .
#include<stdio.h>
int main(void){
int num;
printf("Enter the number:");
scanf("%d", &num);
  long long int sum=0;
  int temp= num;
  int  ans=num;
     int c=0;
     for(; temp!=0; c++)
           temp/=10;
     // Here I have taken variable which is c which  will find the
     // total number of digit present in the number .


    while(num!=0)
    {
         int rem= num%10;
           int  tra=c;
          long long  int data=1;
             while(tra--){
                 data*=rem ;
             }
             sum+= data;
         num/=10;
    }
    if(sum == ans)
    {

        printf("%d is Armstrong Number", ans);
    }
    else{
     printf("%d is not a  Armstrong Number", ans);
    }


 return 0;
 }
