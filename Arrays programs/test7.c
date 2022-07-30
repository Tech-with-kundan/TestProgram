/*
7. Write a program to find second largest in an array.Take array values from the user.
*/
 #include<stdio.h>
    int main(){
     int arr[10];
     printf("Enter the 10 numbers ");
     for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
     }
     //  for finding second largest number we can find  first largest number then we can easily find
         // second largest number .
            int greater=arr[0];
              for(int i=1; i<10 ; i++){
                if(arr[i]> greater)
                       greater= arr[i];
              }
                // Now find the second  largest number
                 int secondgraeter=arr[0];
                  for(int i=1; i<10; i++){
                    if(arr[i]> secondgraeter){
                         if(arr[i]!=greater){
                            secondgraeter= arr[i];
                         }
                    }
                  }

                    // Now print the second largest number
                      printf("%d", secondgraeter);

      return 0;
    }
