/*
5. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.

*/
#include<stdio.h>
    int main(){
     int arr[10];
     printf("Enter the 10 numbers ");
     for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
     }
      int  g=arr[0];
        for(int i=1; i<10; i++){
             if(arr[i]< g)
                  g= arr[i];
        }
        printf("The   smaller   of 10 numbers is %d", g);


      return 0;
    }
