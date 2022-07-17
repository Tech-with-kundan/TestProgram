//7. Write a program to print the first N even natural numbers in reverse order
  #include<stdio.h>
  int main(void){
          int N;
    printf("Enter the number as you  want  to print :");
    scanf("%d", &N);
    for(int i=N; i>=1; i--)
        printf("%d ", i*2);

  return 0;
  }
