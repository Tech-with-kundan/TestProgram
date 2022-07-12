/*WAP to take time as an input in below given format and convert the time format and
display the result as given below.*/
#include<stdio.h>
int main(void){
  int hr, min;
  printf("Enter the  time ");
  scanf("%d:%d", &hr, &min);
  printf("\"%d Hour and %d Minute\"", hr, min);
return 0;
}
