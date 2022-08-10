//8. Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
   int sumArraayElement(int * a, int size){
     int sum=0;
      for(int i=0; i< size; i++){
         sum+= a[i];
      }
      return sum;

   }
int main(){
  int size;
  printf("Enter the size  of array ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter the array element");
  for(int i=0; i<size ;i++)
     scanf("%d", &arr[i]);
  printf("The total sum of element is %d ", sumArraayElement(arr, size));
  return 0;
}
