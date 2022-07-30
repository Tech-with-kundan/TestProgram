/*
6. Write a program to sort elements of an array of size 10. Take array values from the
user.
*/

 #include<stdio.h>
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
      for(int round=1; round<=10-1; round++){
          int flag= 1;
           for(int j=0; j<=10-round-1;j++ ){
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
       printf("After the sorting the array elements are \n");
           for(int i=0; i<10; i++){
            printf("%d ", arr[i]);
           }


      return 0;
    }
