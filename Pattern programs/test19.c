
/*
19. Write a program to  draw the pattern like this:-
  *****     *****
 *******   *******
********* *********
******MySirG*******
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *


    */
      #include<stdio.h>
      int main(void){

         int i=1;
         int x=5;
         int s=22;
         int g=5;
         while(i<=13){

            if(i<=3){

                int space= 3-i;
                while(space--)
                printf(" ");
                int star= g;
                 while(star--)
                 printf("*");
                 int  gap=x;
                 while(gap--)
                 printf(" ");
                 star= g;
                 while(star--)
                 printf("*");
                 x-=2;
                 g+=2;


            }
             else if(i==4){
                    int star= i+2;
                    while(star--)
                    printf("*");
                    printf("MySirG");
                    star= i+3;
                    while(star--)
                    printf("*");
             }
             else
             {


                    int space = (i+1)-5;
                     while(space--)
                     printf(" ");
                     int star= s-i;
                      while(star--)
                      printf("*");
                      s--;

             }
             i++;





         printf("\n");
         }
                return 0;

        }




