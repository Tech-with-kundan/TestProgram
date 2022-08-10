//9. Write a program to print the elements of an array in reverse order.
#include<stdio.h>
   int * ReverseArraayElement(int * a, int size){
     int sum=0;
      int j= size-1;
      for(int i=0; i< j ; i++, j--){
             int temp= a[i];
              a[i]= a[j];
              a[j]= temp;


      }

      return a ;

   }
int main(){
  int size;
  printf("Enter the size  of array ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter the array element");
  for(int i=0; i<size ;i++)
     scanf("%d", &arr[i]);
    int *a=ReverseArraayElement(arr,size);
     printf("\n The  reverse array is \n");
       for(int i=0; i<size; i++){
          printf("%d ", a[i]);
       }
        return 0;
}
