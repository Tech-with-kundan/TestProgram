//3. Write a program to calculate the product of two matrices each of order 3x3.
 #include<stdio.h>


    void  Transpose_The_matrix(int arr1[][3]){

        // we have to  find the product of two matrix 3 * 3
           for(int i=0; i<3; i++){
                for(int j=i; j<3; j++){
                          // Here I have  done swap  these two values .
                        int temp= arr1[i][j];
                         arr1[i][j]=  arr1[j][i];
                         arr1[j][i]= temp;
                }
           }


    }
   int main(){
       int arr1[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9} };
        //  you  can also take the  data form the user  .

         /* printf("Enter data for 1st matrix: ");
           for(int i=0 ;i<3; i++ ){
              for(int j=0; j<3; j++){
                  scanf("%d", &arr1[i][j]);
              }
           } */

             Transpose_The_matrix(arr1);
               printf("\n After transpose of  matrix is \n");
                  for(int i=0;  i<3; i++){
                      for(int j=0; j<3; j++){
                           printf("%d ", arr1[i][j]);
                      }
                      printf("\n");
                  }


     return 0;
   }
