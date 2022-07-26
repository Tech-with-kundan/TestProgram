//10. C program to find all roots of a quadratic equation using switch case .
 #include<stdio.h>
 #include<math.h>
 int main(){
    int a,b,c;
    printf("Enter the coefficient of x^2 and constant  term : ");
    scanf("%d%d%d", &a, &b, &c);
    int D ;
    float x , y;
    D=( b*b -  4*a * c);
        switch( (D>0)){


     case 1:
         printf("Root are real and distinct \n");
          x= (-b + sqrt(D))/(2*a);
          y= (-b - sqrt(D))/(2*a);
          printf("Roots are %f %f", x, y);
       break;
      default :
      printf(" Invalid ");

        }




  return 0;
  }
