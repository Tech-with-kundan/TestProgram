//7. Write a program in C to print or display the
// lower triangular of a given matrix.
#include<stdio.h>
#define row 3
#define col 3

    void  PrintThelowertraingle(int arr1[][3]){

           for(int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                      if(j<=i)
                      printf("%d ", arr1[i][j]);
                      else
                      printf("0 ");
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
          PrintThelowertraingle(arr1);
           return 0 ;
   }
