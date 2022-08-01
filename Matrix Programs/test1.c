//1. Write a program to calculate the sum of two matrices each of order 3x3.
 #include<stdio.h>
 #define row 3
 #define col 3


    void  sumof_two_matrix(int arr1[][col], int arr2[][col], int arr3[][col]){

        // we have to  find the sum of two matrix 3 * 3
           for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                   arr3[i][j]= arr1[i][j]+ arr2[i][j];
                }
           }

    }
   int main(){
       int arr1[row][col]={
        {1,2,3},
       {2,3,4},
        {5,6,7} };

       int arr2[row][col]={
             {10,11,12},
             {23,24,45},
             {67,34,12}
       };
       int  arr3[row][col]; // this  2-d matrix  for result
       // if we want to take user input we can take I have written below it code .

         /* printf("Enter data for 1st matrix: ");
           for(int i=0 ;i<3; i++ ){
              for(int j=0; j<3; j++){
                  scanf("%d", &arr1[i][j]);
              }
           }
           printf("Enter data for 2nd matrix: ");
           for(int i=0 ;i<row; i++ ){
              for(int j=0; j<col; j++){
                  scanf("%d", &arr2[i][j]);
              }
           }
           */
             sumof_two_matrix(arr1,arr2,arr3);
               printf("\n The sum of two matrix is \n");
                  for(int i=0;  i<3; i++){
                      for(int j=0; j<3; j++){
                           printf("%d ", arr3[i][j]);
                      }
                      printf("\n");
                  }


     return 0;
   }
