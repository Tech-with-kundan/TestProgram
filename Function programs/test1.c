//1. Write a function to calculate LCM of two numbers. (TSRS)
  #include<stdio.h>
   int LCM(int , int);
    int  main(){
     int a,b;
     printf("Enter the  two number");
     scanf("%d%d", &a, &b);
     printf("LCM of  these number is %d", LCM(a,b));
     return 0;

    }

     int LCM(int a, int b){

         int ans=1;


         if(a>b)
             a= b;

                  for(int i=2; i<=a ; ){
                    if(a%i==0 && b%i==0)
                    {

                         a/=i;
                         b/=i;
                         ans*=i;

                    }
                    else
                        i++;
                  }
                  return ans*a*b;

     }
