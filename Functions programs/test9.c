//9. Write a function to check whether a given number contains a given digit or not.
//(TSRS)
#include<stdio.h>
  void check(int, int );
 int main(void){
  int n, digit;
  printf("Enter the number  and digit as well ");
  scanf("%d%d", &n, &digit);
    if(check(n, digit)){
        printf("Yes number contains the given digit");
    }
     else
        printf("No number contains the given digit");
      return 0;

 }
   int  check(int num, int digit){

            while(num!=0){
                 int r= num %10;
                 if(r== digit)
                     return 1;
                 num/=10;
            }
            return 0;


   }
