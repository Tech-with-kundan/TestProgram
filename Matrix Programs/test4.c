//4. Write a program in C to find the sum of right diagonals of a matrix.
 #include<stdio.h>
 #define row 3
 #define col 3


    int   Sumof_right_daigonal(int arr1[][3]){
            int sum=0;
        // we have to  find the product of two matrix 3 * 3
           for(int i=0; i<row; i++){
                for(int j=0; j<col ; j++){
                        if(i+j== col-1){
                            sum+= arr1[i][j];
                        }
                }
           }
           return sum;


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

            printf("%d ",Sumof_right_daigonal(arr1));


     return 0;
   }
