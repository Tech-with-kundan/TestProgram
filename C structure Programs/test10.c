/*
10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.
*/
#include<stdio.h>
 #include<string.h>

struct student

{
    // member data
    int id;
    int roll;
    char  name[40];
     int chem_marks;
     int phy_marks;
     int maths_marks;



};
    void input(struct student  *);
    void output(struct student );
    void percentage(struct student[],int);
    int main(){


     struct student  S[5];
      for(int i=0; i<5; i++)
        input(&S[i]);
        printf("\tID NO:  ROLL NO:  STUDENT NAME  Che  phy  math  \t\n");
        for(int i=0; i<5; i++)
            output(S[i]);
            percentage(S,5);
            for(int i=0; i<5; i++)
            output(S[i]);
     return 0;
    }

      void input(struct student * arr){
         printf("\nEnter the student details: ");
         scanf("%d", &arr->id);
         scanf("%d", &arr->roll);
         fflush(stdin);
         fgets(arr->name, 40, stdin);
         scanf("%d", &arr->chem_marks);
         scanf("%d", &arr->phy_marks);
         scanf("%d", &arr->maths_marks);




      }

       void output(struct student a){
           printf("\t%d  %d  %s  %d  %d  %d\n", a.id,a.roll,a.name,a.chem_marks, a.phy_marks,a.maths_marks);
       }
        void percentage(struct student s[], int size){
          printf("NAME\tPercentange ");
         for(int i=0; i< size; i++){
            int total= s[i].chem_marks+ s[i].phy_marks+ s[i].maths_marks;
             printf("%s\t %f \n",s[i].name,  total/1.0 / 3);
         }


        }

