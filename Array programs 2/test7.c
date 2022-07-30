/*
 7. Write a function in C to count a total number of duplicate elements in an array.
 */

 #include<stdio.h>

   int dublicate(arr, size);
    int main(){
        int size;
        printf("Enter the size of array ");
        scanf("%d", &size);
     int arr[size];
     printf("Enter the %d numbers ", size);
     for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
     }
       printf("the total number of dublicate numbers is %d ", dublicate(arr, size));

      return 0;
    }
     int dublicate(int arr[], int size){
     // first of all sort the array . And after sorting the array  all the dublicates data will come closer to each then
     // it would  be easy to count dublicate
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
           int count=0;
                  int i=0;
                  while(i<size){
                    int j=i+1;
                      while(j< size && arr[j]== arr[i])
                      {
                            j++;
                            count++;
                      }
                      i=j ;
                  }
                  return count;



     }
