//10 Write a function to find the repeated character in a given string.

 #include<stdio.h>
 #include<string.h>

   char  repeated_character (char *c){
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

             while(i < size){
                 j=i+1;

                  while( j< size && c[j]==c[i])
                  {

                       return c[i];

                  }


                  i=j;
             }
             return 48;

  }
 int main(void){
  char str[100];
  printf("Enter the string:");

   gets(str);

   char ch= repeated_character(str);
    if(ch!=48){
        printf(" this is character who is repeating %c ", ch);
    }
    else{
        printf("No one chracter is repeating ");
    }



   return 0;
  }
