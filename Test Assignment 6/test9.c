// Write a program to find the LCM.
#include<stdio.h>
int main(void){
  int n1,n2;
  printf("Enter the  two number ");
  scanf("%d%d", &n1, &n2);
  int min= n1<n2?n1:n2;
   int ans=1;
    for(int i=2; i<min; )
    {
        if(n1%i==0 && n2%i==0)
        {
             n1/=i;
             n2/=i;
             ans*=i;
        }
        else i++;
    }

 printf("The LCM is %d ", ans*=n1*n2);


    return 0;
}
