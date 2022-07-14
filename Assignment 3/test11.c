/*11. Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/
#include<stdio.h>
int main(void){
 int s1,s2,s3,s4,s5;
   printf("Enter the five subject's marks:");
   scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s4, &s5);
   if(s1>=33 && s3>=33 && s2>=33 && s4>= 33 &&  s5>=33)
     printf("candidate is pass ");
   else
    printf("candidate is not pass");

return 0;
}
