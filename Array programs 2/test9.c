/*
9. Write a function in C to merge two arrays of the same size sorted in descending
order.
*/

  #include<stdio.h>
   void merge (int [], int, int [],int[]);
    int main(){
        int size;

        printf("Please enter the size of array  ");
        scanf("%d", &size);
     int array1 [size];
     int  array2 [size];
     printf("Enter the %d numbers ", size);
     for(int i=0; i<size; i++){
        scanf("%d", &array1[i]);
     }

      for(int i=0; i<size; i++){
        scanf("%d", &array2[i]);
     }
     int  ptr[size+size];
         merge(array1,size, array2, ptr);
       printf("After the merging the whole array is \n");
         for(int i=0; i< (size+ size);  i++){
            printf("%d ", ptr[i]);
         }

      return 0;
    }

    void merge(int arr1[], int s1,int arr2 [], int temp[]){

      // the logic is very simple first we have to arrange the both array first descending order
      // then we will merge them in the temporary array
       for(int round=1; round<=s1-1; round++){
          int flag= 1;
           for(int j=0; j<=s1-round-1;j++ ){
             if(arr1[j]< arr1[j+1]){
                  int temp= arr1[j+1];
                  arr1[j+1]= arr1[j];
                  arr1[j]=  temp ;
                   flag=0;
             }
           }
            if(flag)
               break;
      }
       for(int round=1; round<=s1-1; round++){
          int flag= 1;
           for(int j=0; j<=s1-round-1;j++ ){
             if(arr2[j]< arr2[j+1]){
                  int temp= arr2[j+1];
                  arr2[j+1]= arr2[j];
                  arr2[j]=  temp ;
                   flag=0;
             }
           }
            if(flag)
               break;
       }

       int i=0;
           int j=0;
           int index=0;
           while((i<s1) && (j<s1))
           {
                if(arr1[i] >= arr2[j])
                    temp[index++]= arr1[i++];

                 else
                   temp[index++]= arr2[j++];
           }
            while(i<s1)
             temp[index++]= arr1[i++];
          while(j<s1)
            temp[index++]= arr2[j++];





      }
