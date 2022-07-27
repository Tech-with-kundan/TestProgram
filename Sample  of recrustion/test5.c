//5. Write a recursive function to print first N even natural numbers
 #include<stdio.h>
 void print(int);
 int main(void){
   int num;
   printf("Enter the number ");
   scanf("%d", &num);
   print(num);

   return 0;
  }
    void print(int num){

    //  base case
      if(num==0)
          return ;
        print(num-1);
        printf("%d ", num*2);

    }
