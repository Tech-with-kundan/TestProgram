//8. Write a program in C to print or display an upper triangular matrix.

#include<stdio.h>
#define row 3
#define col 3

    void  PrintTheUpaartraingle(int arr1[][3]){

           for(int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                           if(i>j)
                      printf("0 ");
                      else
                      printf("%d ", arr1[i][j]);

                }
                printf("\n");
           }

    }
   int main(){
       int arr1[3][3]={
        {1,2,3},
       {2,3,4},
        {5,6,7} };


      // this  2-d matrix  for result
       // if we want to take user input we can take I have written below it code .

         /* printf("Enter data for matrix: ");
           for(int i=0 ;i<3; i++ ){
              for(int j=0; j<3; j++){
                  scanf("%d", &arr1[i][j]);
              }
           }

           */
          PrintTheUpaartraingle(arr1);
           return 0 ;
   }
