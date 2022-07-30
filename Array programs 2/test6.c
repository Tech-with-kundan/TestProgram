/*
6. Write a function in C to read n number of values in an array and display it in reverse
order.
*/
   #include<stdio.h>

   int reverse(int);
    int main(){
     int arr[10];
     printf("Enter the 10 numbers ");
     for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
     }
         printf("Printing the array 's element in the reverse order\n");
          for(int i=0; i<10; i++){
            int data= reverse(arr[i]);
            printf("%d ", data);
          }


      return 0;
    }
      int reverse(int val)
      {

          int rev=0;
           while(val!=0){
             int rem= val % 10;
              rev = rev * 10 + rem;
              val/=10;

           }
           return rev ;
      }
