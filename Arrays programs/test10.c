/*
10. Write a program in C to copy the elements of one array into another array.Take array
values from the user.
*/
#include<stdio.h>
    int main(){
     int arr[10];
     printf("Enter the 10 numbers ");
     for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
     }
      int temp[10];
      for(int i=0; i<10 ; i++){
        // copy all the  element from older to newly  array .
          temp[i]= arr[i];
      }
      // data  has copied
         // let's print it
           for(int i=0; i<10; i++){
            printf("%d ", temp[i]);
           }

      return 0;
    }
