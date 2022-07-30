/*
3. Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.
*/

 #include<stdio.h>
    int main(){
     int arr[10];
     printf("Enter the 10 numbers ");
     for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
     }
      int even=0, odd=0;
        for(int i=0; i<10; i++){
               if(arr[i] & 1)
                  odd+= arr[i];
               else
                even+= arr[i];
        }
        printf("The  sum  of even  numbers is %d\n", even);
        printf("The  sum  of odd  numbers is %d", odd);


      return 0;
    }
