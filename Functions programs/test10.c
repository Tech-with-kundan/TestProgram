//10. Write a function to print all prime factors of a given number. For example, if the
//number is 36 then your result should be 2, 2, 3, 3. (TSRN)
  #include<stdio.h>
  void primefact(int n);
 int main(void){
  int n;
  printf("Enter the number ");
  scanf("%d", &n);
  primefact(n);
  return 0;

 }
     void primefact(int num){


          int a=0;
          int x=num;
            for(int i=2; i<=num; i++){
                     if(num%i==0){
                          if(i==x) // this condition for prime number
                             break;

                         while(num%i==0 ){
                              num/=i;
                               a=1;
                              printf("%d ", i);
                         }

                     }
            }
                if(a==0)
                 {
                   printf("%d  %d", 1,  num);
                 }



     }
