//3. Write a function to display employee data. [ Refer structure from question 1 ]
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
     // user- taking data on run time
       printf("Enter the details  for 4th employee:");
       scanf("%d", &d.id);
       fgets(d.name, 40, stdin);
       scanf("%f", &d.salary);


       a.id= 1;
      strcpy( a.name, "Kundan Kuamr");
      a.salary=100000;
       b.id= 2;
      strcpy( b.name, "Bablu kumar");
      b.salary=100000;

       c.id= 3;
      strcpy( c.name, "Rohit kumar ");
      c.salary=100000;

 // Printing those data which we had taken .
      printf("\tID NO:\tNAME\t\tSALARY\n");
      printf("\t%d\t%s\t%f\n", a.id, a.name, a.salary);
      printf("\t%d\t%s\t%f\n", b.id, a.name, b.salary);
      printf("\t%d\t%s\t%f\n", c.id, a.name, c.salary);
      printf("\t%d\t%s\t%f\n", d.id, a.name, d.salary);



       return  0;
     }
