//1. Write a function to calculate the area of a circle. (TSRS)
 #include<stdio.h>
 float areaofcircle(float);
 int main(void){

  float radius;
  printf("enter the radius of circle ");
  scanf("%f", &radius);
  printf("%f", areaofcircle(radius));
  return 0;


 }
   float areaofcircle(float r){
     return 3.14*r*r;
   }
