/*9. Program to Convert even number into its upper nearest odd number
Switch Statement. */
  #include<stdio.h>
   int main(void){

       int num;
       printf("Enter the number ");
       scanf("%d", &num);
        switch(num%2==0){
      case 1:
              printf("Its Upper Nearest odd number is %d", num+1);
              break;
       default :
         printf("Invalid number");

         }


      return 0;
    }

