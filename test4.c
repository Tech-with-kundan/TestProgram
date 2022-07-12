// program to  calculate are of circle
#include<stdio.h>
int main(void){
  float radius ;
  printf(" Enter the radius of circle:: ");
  scanf("%f", &radius);
  float area= 3.14* radius * radius ;
  printf("Area of circle is %f having the radius %f", area, radius);
return 0;
}
