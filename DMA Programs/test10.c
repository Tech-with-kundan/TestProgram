/*
10. Find out the maximum and minimum from an array using dynamic memory allocation in C.
*/
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
     int maxi=-1, mini=*(arr+0);
     for(int i=0; i<n; i++)
     {
           if(*(arr+i)< mini)
              mini= *(arr+i);
            if(*(arr+i)> maxi)
                  maxi= *(arr+i);


     }
     // let's print the maximum element  and  minimum element of this array .
     printf("Max element is %d \n", maxi);
     printf("Min element is %d \n", mini );

   free(arr);

  return 0;
 }
