//2. Write a function to take input employee data from the user. [ Refer structure from
//question 1 ]

#include<stdio.h>
 #include<string.h>
 // I have  constructed the Employee Data structure  //
 struct Emp {

   int id;
   char name[40];
   float salary ;


 };
     int  main(){

       struct Emp a ;

    //  I have taken data from the user  .
         printf("Enter the 4 employee details:");
         scanf("%d", &a.id);
         fgets(a.name, 40, stdin);
         scanf("%f", &a.salary);
         printf("\tID NO:\tNAME\t\tSALARY\n");


       return  0;
     }
