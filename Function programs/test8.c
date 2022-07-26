//8. Write a function to print PASCAL Triangle. (TSRN)
 #include<stdio.h>
  void pascal_Triangle(int );
  int  main(){
    int row;
     printf("Enter the row: ");
     scanf("%d", &row);
     pascal_Triangle(row);

    return 0;
   }
     void pascal_Triangle(int no){

       for(int i=1; i<=no; i++){
           int n=1;
           int space=  no-i;
            while(space--)
            printf(" ");

            for(int j=1; j<=i; j++){

                  printf("%d ", n);
                  n = n* (i-j)/j;

            }
             printf("\n");
       }



     }
