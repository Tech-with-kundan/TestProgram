//17. Write a program which takes the length of the sides of a triangle as an input. Display
//whether the triangle is valid or not.
#include<stdio.h>
int main(void){
 int a,b,c,sum=0;
  printf("Enter the tree  sides of triangle ");
   scanf("%d%d%d", &a, &b, &c);
     int lar= a>b?a>c?a:b:b>c?b:c ;
        if(lar==a)
        {
              sum= b+c;
               if(sum> lar)
                  printf("Triangle is  valid ");
               else
                printf("Triangle is not valid ");
        }
        else if(lar==b)
        {
            sum= a+c;
               if(sum> lar)
                  printf("Triangle is  valid ");
               else
                printf("Triangle is not valid ");

        }
        else{
            sum= b+a;
               if(sum> lar)
                  printf("Triangle is  valid ");
               else
                printf("Triangle is not valid ");
        }
return 0;
}
