//10. Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>
#define row 5
#define col 5


    int  find_the_row_with_maximum_number_of_1s (int arr1[][col]){


         int one1s =0;
           int min=-1;
          int ans=0;
           for(int i=0; i<row; i++){
                one1s=0;
                for(int j=0; j<col; j++){
                         if(arr1[i][j]==1)
                         one1s++;


                }
                   if(one1s>min){
                    min= one1s;
                    ans=i;
                   }
           }
           return ans;

    }
   int main(){
       int arr1[row][col]={
        {1,2,0,1,0},
       {2,0,0,1,0},
        {5,0,7,1,0},
        {1,1,1,1,0},
        {1,1,1,0,8} };
         // if we want to take user input we can take I have written below it code .

         /* printf("Enter data for 1st matrix: ");
           for(int i=0 ;i<3; i++ ){
              for(int j=0; j<3; j++){
                  scanf("%d", &arr1[i][j]);
              }
           }
            */
            printf("  This row is carrying more 1s  %d ",find_the_row_with_maximum_number_of_1s(arr1));
             return 0;
   }



