//10. Write a program in C to Find the Frequency of Characters.

 #include<stdio.h>
 #include<string.h>

  void sorting(char *c){
       int size= strlen(c);
       for(int i=1; i<size; i++){
         char temp= c[i];
            int j=i-1;
          for(  ; j>=0; j--){
            if(c[j]>= temp)
                 c[j+1]= c[j];
            else
                break;
          }
           c[j+1]= temp;

       }


           int i=0;
            int j=0;
            int count=1;
           // int size= strlen(c);
           //printf("%c\n", c[0]);
             while(i < size){
                 j=i+1;
                 count=1;
                  while( j< size && c[j]==c[i])
                  {

                      j++;
                      count++;
                  }

                  printf("%c -> %d\n", c[i],count);
                  i=j;
             }

  }
 int main(void){
  char str[100];
  printf("Enter the string:");

   gets(str);

   sorting(str);



   return 0;
  }
