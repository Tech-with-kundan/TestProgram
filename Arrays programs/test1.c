//1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
//array values from the user.

    #include<stdio.h>
    int main(){
     int arr[10];
     printf("Enter the 10 numbers ");
     for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
     }
      int sum=0;
        for(int i=0; i<10; i++){
             sum+= arr[i];
        }
        printf("The sum of 10 numbers is %d", sum);


      return 0;
    }
