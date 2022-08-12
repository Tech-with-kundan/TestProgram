//5. Write a function to sort employees according to their salaries [ refer structure from
//question 1]
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
    void sort(struct Emp *,int ,int );
     int  main(){

     struct   Emp  arr [10];
     // Inputing the data from the input function .
      for(int i=0; i<10; i++){
        input( &arr[i]);
      }
      printf("\n\tBefore the sorting the employee data is :\n");
     printf("\tID NO:\tNAME\t\tSALARY\n");
     for(int i=0; i<10; i++){
        output( arr [i]);
      }
       printf("\n\tAfter  the sorting the employee data is :\n");
       sort(arr,0,9);
        printf("\n\tID NO:\tNAME\t\tSALARY\n");
        for(int i=0; i<10; i++){
        output( arr [i]);
      }


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


        void sortthem(struct  Emp * a, int s, int mid, int h){
         struct Emp temp[h+1];
         int i=s ;
         int j= mid+1;
         int k=s;
                      while((i<=mid) && (j<=h)){
                         if(a[i].salary<= a[j].salary)
                             temp[k++]= a[i++];
                         else
                            temp[k++]= a[j++];

                      }
                         while(i<=mid)
                             temp[k++]= a[i++];
                         while(j<=h){
                            temp[k++]= a[j++];
                         }

                         // copy the  all the original employee array .
                         for(int i=s; i<=h; i++)
                             a[i]= temp[i];



        }
         void sort(struct Emp * a, int low, int high){
                 // Let's apply the merge sort  to  sort these employee detais
                 if(low< high){

                    int mid= low+ (high- low)/ 2;
                     sort(a,low, mid);
                     sort(a,mid+1, high);
                     sortthem(a, low, mid, high);
                 }


        }
