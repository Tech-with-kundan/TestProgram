/*
. 4. Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
*/
 #include<stdio.h>
   void  rotation (int [], int,int);
    int main(){
        int size;
        printf("Enter the array size:");
        scanf("%d", &size);
     int arr[size];
     int n;
     printf("Enter the %d  numbers ", size);
     for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
     }
      printf("Enter the position number:");
      scanf("%d", &n);
     rotation(arr,size,n);
      printf("\nAfter rotating the  the array looks like\n");
      for(int i=0; i<size; i++){
         printf("%d ", arr[i]);
      }

      return 0;
    }
    void  rotation(int arr[], int size, int n){
     int temp[n];
      for(int i=0 ;i<n; i++)
           temp[i]= arr[i];

      int index=0;
        for(int i=n; i<size; i++){
            arr[index++]= arr[i];
        }
          for(int i=0; i<n; i++)
              arr[index++]=temp[i];

     }
