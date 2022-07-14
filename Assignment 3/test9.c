/*9. Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.*/
    #include<stdio.h>
int main(void){
       int num1,num2, num3 ;
       printf("Enter the three numbers ::");
       scanf("%d%d%d", &num1, &num2, &num3);
       printf("Greater number is %d ", num1>num2? num1>num3? num1:num3: num2>num3? num2: num3);
   return 0;
}
