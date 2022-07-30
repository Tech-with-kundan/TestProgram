/*
10. Write a function in C to count the frequency of each element of an array.
*/

 #include<stdio.h>

   void frequency(int [], int );
    int main(){
        int size;
        printf("Enter the size of array ");
        scanf("%d", &size);
     int arr[size];
     printf("Enter the %d numbers ", size);
     for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
     }
      frequency(arr, size);

      return 0;
    }
    void  frequency(int arr[], int size){
     // first of all sort the array . And after sorting the array  all the frequency of  data will come closer to each then
     // it would  be easy to count frequency
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
           int count=1;
                  int i=0;
                  while(i<size){
                    int j=i+1;
                    int count=1;
                      while(j< size && arr[j] == arr[i])
                      {
                            j++;
                            count++;
                      }
                      printf("%d  -> %d \n", arr[i], count);
                      i=j ;
                  }




     }
