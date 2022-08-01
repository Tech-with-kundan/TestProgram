//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
/*
What is sparse matrix with example?
Image result for what is property of sparse matrix
The matrix which has a greater number of zero values in comparison to
the non-zero values is known as a sparse matrix.
*/
#include<stdio.h>
#define row 5
#define col 5


    int  checkSparse_Matrix(int arr1[][col]){

         int zero =0;
         int nonzero=0;
           for(int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                         if(arr1[i][j]==0)
                          zero++;
                    else
                        nonzero++;

                }
           }
             if(zero>nonzero)
                 return 1;
             else
                return 0;

    }
   int main(){
       int arr1[row][col]={
        {1,2,0,0,0},
       {2,0,0,1,0},
        {5,0,7,0,0},
        {1,0,0,5,0},
        {34,0,7,0,8} };
         // if we want to take user input we can take I have written below it code .

         /* printf("Enter data for 1st matrix: ");
           for(int i=0 ;i<row; i++ ){
              for(int j=0; j<col; j++){
                  scanf("%d", &arr1[i][j]);
              }
           }
            */
             if(checkSparse_Matrix(arr1)){
                printf(" Yes it is Sparse matrix ");
             }
             else {
               printf(" No  it is  Dense matrix ");
             }
             return 0;
   }



