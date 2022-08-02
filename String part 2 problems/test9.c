#include<stdio.h>
#include<string.h>
 void generate2_Dstring(char *s){
  int i=0;
  int j=0;
    int size= strlen(s);
  // the logic behind it 's very simple first of all we will create 2-D string and after creating this
  //  it would be easy to reverse the words of 1-D  strings  . That 's Why I have created the 2-D string .

  char str[200][200];

      for(int k=0; k<size; k++)
       {
            if(s[k]==32 && s[k+1]!=32 ){

                  i++;
                  j=0;

            }
            else{

                str[i][j++]= s[k];
                 if(k+1==size)
                     str[i][j]='\0';


            }
      }
      printf("Before reversing the words are:-\n");
      for(int k=0; k<i+1; k++)
           printf("%s ", str[k]);
       int a=0;
       int b=i;
       // this code  for swapping between two words .
           while(a<b){
            char st[20];
            strcpy(st,str[a]);
            strcpy(str[a],str[b]);
            strcpy(str[b], st);
            a++;
            b--;

           }

  printf("\nAfter reversing the words are:- \n");
 for(int k=0; k<i+1; k++)
           printf("%s ", str[k]);
      }


int main(){
    char str[1000];
     printf("Enter the string ");
     gets(str);
     generate2_Dstring(str);
  return 0;
}
