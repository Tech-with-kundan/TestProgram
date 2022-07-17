// 3. Write a program to calculate sum of first N odd natural numbers
int main(void){
         int N;
    printf("Enter the number  :");
    scanf("%d", &N);
    int sum=0;
    for(int i=1; i<=N; i++)
          sum= sum+ (i*2-1);
          printf("Sum of first N odd natural numbers is %d ", sum);
          return 0;
}
