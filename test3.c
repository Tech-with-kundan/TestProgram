#include<stdio.h>
int main()
{
    // Calculate area of circle
    float  radius;
    printf("Enter the radius of circle :");
    scanf("%f", &radius);
     float area=3.14*radius*radius;
     printf("Area  of circle is %f  having the %.2f radius", area, radius);
  return 0;
}
