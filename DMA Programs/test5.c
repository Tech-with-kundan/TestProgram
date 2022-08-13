/*
5. Write a program to read a one dimensional array, print sum of all elements along with
    inputted array elements using dynamic memory allocation.
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
     int sum=0;
     for(int i=0; i<n; i++)
     {
          sum+=*(arr+i);
          printf("Sum of %d element is %d \n", i+1, sum);

     }

   free(arr);

  return 0;
 }
