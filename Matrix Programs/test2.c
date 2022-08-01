//2. Write a program to calculate the product of two matrices each of order 3x3.
 #include<stdio.h>
    void  sumof_two_matrix(int arr1[][3], int arr2[][3], int arr3[][3]){

        // we have to  find the product of two matrix 3 * 3
           for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                   arr3[i][j]= arr1[i][j]* arr2[i][j];
                }
           }

    }
   int main(){
       int arr1[3][3]={
        {1,2,3},
       {2,3,4},
        {5,6,7} };

       int arr2[3][3]={
             {10,11,12},
             {23,24,45},
             {67,34,12}
       };
       int  arr3[3][3];
         /* printf("Enter data for 1st matrix: ");
           for(int i=0 ;i<3; i++ ){
              for(int j=0; j<3; j++){
                  scanf("%d", &arr1[i][j]);
              }
           }
           printf("Enter data for 2nd matrix: ");
           for(int i=0 ;i<3; i++ ){
              for(int j=0; j<3; j++){
                  scanf("%d", &arr2[i][j]);
              }
           }
           */
             sumof_two_matrix(arr1,arr2,arr3);
               printf("\n The product  of two matrix is \n");
                  for(int i=0;  i<3; i++){
                      for(int j=0; j<3; j++){
                           printf("%d ", arr3[i][j]);
                      }
                      printf("\n");
                  }


     return 0;
   }
