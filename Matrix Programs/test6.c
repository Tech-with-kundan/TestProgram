//6. Write a program in C to find the sum of rows and columns of a Matrix.
 #include<stdio.h>
 #define row 3
 #define col 3

void  Sumof_The_matrix(int arr1[][col]){
       int sum1=0;
       int sum2=0;
        // we have to  find the product of two matrix 3 * 3
           for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                          // Here I have  done swap  these two values .
                          sum1+= arr1[i][j];
                          sum2+= arr1[j][i];

                }
                printf(" The sum of %d row  is %d  \n", i+1, sum1);
                printf(" The sum of %d col  is %d  \n", i+1, sum2);
                sum1=0;
                sum2=0;
           }


    }
   int main(){
       int arr1[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9} };
        //  you  can also take the  data form the user  . Here I have  given the  code for taking the data
         // form user .

         /* printf("Enter data for  matrix: ");
           for(int i=0 ;i<row; i++ ){
              for(int j=0; j<col; j++){
                  scanf("%d", &arr1[i][j]);
              }
           } */
          Sumof_The_matrix(arr1);


     return 0;
   }
