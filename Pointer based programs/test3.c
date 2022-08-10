//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

#include<stdio.h>
 void sort(int *, int );
   int main(){
   int size;
   printf("enter the array size :");
   scanf("%d", &size);
   int arr[size];
   printf("Enter the array  elements ");
   for(int i=0; i< size; i++){
     scanf("%d", &arr[i]);
   }
    printf("\nBefore sorting the arrays elements are :\n");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);

    }
    sort(arr, size);
     printf("\nAfter sorting the arrays elements are :\n");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);

    }

     return 0;
    }



     void sort(int * ptr,int size){
         // I will use bubble sort algorithm
          for(int round=1; round<=size-1; round++){

            for(int j=0; j<=size-round-1;j++ ){
                 if(ptr[j]> ptr[j+1]){
                    int temp= ptr[j];
                     ptr[j]= ptr[j+1];
                     ptr[j+1]= temp ;
                 }
            }
          }

     }
