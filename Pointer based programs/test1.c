//1. Write a function to swap values of two in variables of calling function. (TSRS)
 #include<stdio.h>
 void swap(int *, int * );
  void swap(int * a, int * b){

   *b= (*a+*b)- (*a= *a+ *b - *a);
  }
 int main(void){
     int a, b;
     printf("Enter the two number:");
     scanf("%d%d", &a, &b);
      printf("Before sorting the values are : \n a = %d \nb= %d ", a, b);
      swap(&a, &b);
      printf("after sorting the values are : \n a = %d \n b= %d ", a, b);

   return 0;
  }
