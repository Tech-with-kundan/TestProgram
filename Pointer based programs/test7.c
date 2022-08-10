//7. Write a program to count the number of vowels and consonants in a string using a pointer.
 #include<stdio.h>
 void  count_vowel_consonet(char *c){
  int vowel=0;
  int conso=0;
  for(int i=0; c[i]; i++){
      if(c[i]=='A'|| c[i]=='E'|| c[i]=='O'|| c[i]=='I'|| c[i]=='U')
          vowel++;
      else  if(c[i]=='a'|| c[i]=='e'|| c[i]==o'|| c[i]=='i'|| c[i]=='u')
          vowel++;
        else
            conso++;



  }
   printf("the vowels are present in the string is %d  \n", vowel);
   printf("the consonant  are present in the string is %d  \n", conso);


 }
    int main(){

     char str[100];
     fgets(str,100, stdin);
     count_vowel_consonet(str);

       return 0;
     }
