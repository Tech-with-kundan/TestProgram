/*
5.5. Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.
*/
#include<stdio.h>
  int occurrencefind(int[], int);
    int main(){
        int size;
        printf("Enter the size of array ");
        scanf("%d", &size);


     int arr[size];
     printf("Enter the %d numbers ", size);
     for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
     }

        int ocr= occurrencefind(arr,size);
         if(ocr==-1)
           printf("NOt present occurence in the array ");
           else
           printf("yes the occurrence is %d", ocr);


      return 0;
    }
      int occurrencefind(int arr[], int size){

      for(int round=1; round<=size-1; round++){
          int flag= 1;
           for(int j=0; j<=size-round-1;j++ ){
             if(arr[j]> arr[j+1]){
                  int temp= arr[j+1];
                  arr[j+1]= arr[j];
                  arr[j]=  temp ;
                   flag=0;
             }
           }
            if(flag)
               break;
      }
       int val = arr[0];

      for(int i=1; i<size; i++){
          if(val == arr[i]){
            return  arr[i];
          }

      }
      return -1;



      }
