//8. Write a program to store information of 10 students and display them using structure.
 #include<stdio.h>
 #include<string.h>

struct student

{
    // member data
    int id;
    int roll;
    char  name[40];
    int classGrade ;
    char parents_name[50];
    char address[100];
    long long int  parents_Mobile_Number ;



};
    void input(struct student  *);
    void output(struct student );
    int main(){

     struct student  S[50];
      for(int i=0; i<2; i++)
        input(&S[i]);
        printf("\tID NO:  ROLL NO:  STUDENT NAME CLASS  PARENT's NAME  ADRESS  MOBILE NO\t\n");
        for(int i=0; i<2; i++)
            output(S[i]);
     return 0;
    }

      void input(struct student * arr){
        printf("\nEnter the student details: ");
        scanf("%d", &arr->id);
        scanf("%d", &arr->roll);
        fflush(stdin);
        fgets(arr->name, 40, stdin);
        scanf("%d", &arr->classGrade);
        fflush(stdin);
         fgets(arr->parents_name, 50, stdin);
         fgets(arr->address, 100, stdin);
          scanf("%lld", &arr->parents_Mobile_Number);


      }

       void output(struct student a){
           printf("\t%d\t%d\t%s\t%d\t%s\t%s\t%lld\n", a.id,a.roll,a.name,a.classGrade,a.parents_name,a.address,a.parents_Mobile_Number);
       }
