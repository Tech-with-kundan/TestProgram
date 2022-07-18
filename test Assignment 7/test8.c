//8. Write a program to find next Prime number of a given number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
      for(int i=n+1;i<=i; i++ ){
        int j;
        for(j=2; j<=sqrt(i); j++){
            if(i%j==0)
                break;
        }
        int d= sqrt(i);
        if(j-1==d){
            printf("%d is the next prime number", i);
            break;
        }
      }



  return 0;
}
