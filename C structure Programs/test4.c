/*
4. Write a function to find the highest salary employee from a given array of 10
    employees. [ Refer structure from question 1]
*/

#include<stdio.h>
 #include<string.h>
 // I have  constructed the Employee Data structure  //
 struct Emp {

   int id;
   char name[40];
   float salary ;


 };
   void input (struct Emp * );
   void output(struct Emp);
   struct Emp*  Find_the_Highest_Salary_person(struct Emp *,int );
     int  main(){

     struct   Emp  arr [3];
     // Inputing the data from the input function .
      for(int i=0; i<3; i++){
        input( &arr[i]);
      }
     printf("\tID NO:\tNAME\t\t\tSALARY\n");
     for(int i=0; i<3; i++){
        output( arr [i]);
      }
      printf("\n\tThis has higher salary in the company\n");
      printf("\tID NO:\tNAME\t\t\tSALARY\n");
      struct Emp *S= Find_the_Highest_Salary_person(arr, 3);
       printf("\t%d\t%s\t\t%f\n",S->id, S->name, S->salary);

       return  0;
     }

      void input(struct Emp * a){
           printf("Enter the  employee details:");
           scanf("%d", &a->id);
            fflush(stdin);
           gets(a->name);

          scanf("%f", &a->salary);

      }

       void output(struct Emp a){

        printf("\t%d\t%s\t\t%f\n", a.id, a.name, a.salary);
       }
        struct Emp * Find_the_Highest_Salary_person(struct Emp * a, int size){
           int salary=-1;
           struct Emp *man=NULL;
           for(int i=0; i< size; i++){
                 if(a[i].salary >salary){
                      salary= a[i].salary;
                      man= &a[i];
                 }
           }
           return man;

        }
