//1. Write a function to calculate HCF of two numbers. (TSRS)
  #include<stdio.h>
   int HCF(int , int);
    int  main(){
     int a,b;
     printf("Enter the  two number");
     scanf("%d%d", &a, &b);
     printf("HCF of  these number is %d", HCF(a,b));
     return 0;

    }

     int HCF(int a, int b){
             int i=1;
             int ans=1;
             for(; (i<=a && i<=b) ; i++)
             {

                  if(a%i==0 && b%i==0)
                  {

                       ans=i;
                  }
             }
             return ans;

     }
