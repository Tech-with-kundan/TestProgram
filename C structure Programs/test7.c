//7. Write a program to calculate the difference between two time periods.
#include<stdio.h>
struct time {
 int hour;
 int min;
 int sec;


};
      int main(){
       time t1, t2;
       printf("Enter the time 1st time periods");
       scanf("%d%d%d", &t1.hour, &t1.min, &t1.sec);
       printf("Enter the time 2nd  time periods");
       scanf("%d%d%d", &t1.hour, &t1.min, &t1.sec);
       printf("\n\t The difference between two time periods are :\n");
       printf("difference in hour is  %d\n", t1.hour- t2.hour);
       printf("difference in min  is %d\n", t1.min- t2.min);
       printf("difference in sec  is %d\n", t1.sec- t2.sec);

       return  0;
      }
