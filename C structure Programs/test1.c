//1. Define a structure Employee with member variables id, name, salary.
#include<stdio.h>
 #include<string.h>
 // I have  constructed the Employee Data structure  //
 struct Emp {

   int id;
   char name[40];
   float salary ;


 };
     int  main(){

     struct   Emp a,b,c,d;
       a.id= 1;
      strcpy( a.name, "Kundan Kuamr");
      a.salary=100000;
       b.id= 2;
      strcpy( b.name, "Bablu kumar");
      b.salary=100000;

       c.id= 3;
      strcpy( c.name, "Rohit kumar ");
      c.salary=100000;

       d.id= 4;
      strcpy( d.name, "Rajan Kumar ");
      d.salary=100000;
      printf("\tID NO:\tNAME\t\tSALARY\n");
      printf("\t%d\t%s\t%f\n", a.id, a.name, a.salary);
      printf("\t%d\t%s\t%f\n", b.id, a.name, b.salary);
      printf("\t%d\t%s\t%f\n", c.id, a.name, c.salary);
      printf("\t%d\t%s\t%f\n", d.id, a.name, d.salary);



       return  0;
     }
