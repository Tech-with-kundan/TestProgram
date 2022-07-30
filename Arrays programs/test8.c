/*
8. Write a program to find the second smallest number in an array.Take array values
from the user.
*/
#include<stdio.h>
    int main(){
     int arr[10];
     printf("Enter the 10 numbers ");
     for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
     }
     //  for finding second smaller number we can find  first smaller number then we can easily find
         // second smaller number .
            int smaller=arr[0];
              for(int i=1; i<10 ; i++){
                if(arr[i]< smaller)
                       smaller= arr[i];
              }
                // Now find the second  smaller number
                 int secondsmaller=arr[0];
                  for(int i=1; i<10; i++){
                    if(arr[i]< secondsmaller){
                         if(arr[i]!=smaller){
                            secondsmaller= arr[i];
                         }
                    }
                  }

                    // Now print the second smaller number
                      printf("%d", secondsmaller);

      return 0;
    }
