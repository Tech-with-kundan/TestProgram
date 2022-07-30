/*
3. Write a function to sort an array of any size. (TSRS)
*/

 #include<stdio.h>
    int * sort(int[], int);
    int main(){
     int arr[10];
     printf("Enter the 10 numbers ");
     for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
     }
          printf("Before the sorting the array elements are \n");
           for(int i=0; i<10; i++){
            printf("%d ", arr[i]);
           }
           printf("\n");
          int * ptr=  sort(arr,10);
       printf("After the sorting the array elements are \n");
           for(int i=0; i<10; i++){
            printf("%d ", ptr[i]);
           }


      return 0;
    }
     int * sort(int arr[], int size){

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
      return arr;

      }
