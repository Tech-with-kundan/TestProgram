/*
2. Write a function to find the smallest number from the given array of any size. (TSRS)
*/ #include<stdio.h>
    int main(){
     int arr[10];
    #include<stdio.h>
   int smaller(int [], int);
    int main(){
     int arr[10];
     printf("Enter the 10 numbers ");
     for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
     }

        printf("The  smaller  of 10 numbers is %d",smaller(arr,10));


      return 0;
    }
     int smaller(int arr[], int size){
        int  g=arr[0];
        for(int i=1; i<10; i++){
             if(arr[i]< g)
                  g= arr[i];
        }
         return g;


     }
