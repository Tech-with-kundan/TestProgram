//6. Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
 #include<stdlib.h>
 int main(){

   int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int * arr= (int * ) malloc(sizeof(int) * n);
    printf("Enter the array element:");
    for(int i=0; i< n; i++)
         scanf("%d", arr+i);
     int maxi=-1;
     for(int i=0; i<n; i++)
     {
         if(*(arr+i)> maxi)
             maxi= *(arr+i);

     }
        printf("\nThe largest number amoung numbers is %d ", maxi);

   free(arr);

  return 0;
 }
