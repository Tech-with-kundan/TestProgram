//9. Write a C program to sort a string array in ascending order.
 #include<stdio.h>
  void sorting(char *c){
       for(int i=1; c[i]; i++){
         char temp= c[i];
            int j=i-1;
          for(  ; j>=0; j--){
            if(c[j]> temp)
                 c[j+1]= c[j];
            else
                break;
          }
           c[j+1]= temp;

       }

  }
 int main(void){
  char str[100];
  printf("Enter the string:");
  fgets(str,100, stdin);
   printf("Before sorting the string is %s\n", str);
   sorting(str);
   printf("After the sorting the string is %s", str);


   return 0;
  }
