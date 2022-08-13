/*
7. Write a program to demonstrate memory leak in C.
/** Now we are going  to talk about memory leak concept . This  concept is more important for those
    who are not aware from the memory lead defects . Memory Leak is such dangerous thing in the computer
    it occurs due to bad programming . As we know that we run a our   program it takes memory into the RAM.
    And RAM provides a limited memory to our programs . What will happen when  mostly memory has leaked ,
    let's assume that a scenario suppose  we run a program and the program is heavy it requires 100 MB
    But we have leaked so much memory in the RAM , so in this particular case our program will not be executed .
    This is why it is very dangerous  concept .

    As a programmer if you are dealing  with  DMA memory allocation , so  this will be your responsibility
     deallocate the memory explicitly , otherwise the   memory leak  would happen .

    Let's understand it after taking appropriate   an example .

      void fun(  )
      {
         printf("This DMA variable");
        int *ptr=(int*)  malloc(sizeof(int));
        // Here I have a created one variable using malloc ()  Dynamically .

      }
        int  main( )
        {
            fun();

        }

        /* Let's in this program what  have I done , I  have defined one function and  I have created
        DMA variable inside this fun()  function. But here I haven't either return the DMA variable or
        Deallocate the DMA variable , So here  we are getting the memory leak problems .
        Now what is the solution , the   solution will be of  this  question is if your work finishes,
        now you have  no any another work to do with DMA variable in that case you can deallocate it , otherwise
        return it  to it caller function . Because The DMA  variable's scope reside  till the execution of  the program .

         */

*/

   #include<stdio.h>
   #include<stdlib.h>
  void fun(){
   printf("Hello Programmer I am dealing with DMA variables ");
   int * pr=  (int*) malloc(sizeof(int));
     // Here Now I have created the DMA variable
     // If  I won't deallocate this memory then it will be leaked .
     //  To avoid this memory leap I will use here  free() .
    // As we know that about free()  helps us to deallocate the DMA memory variable .
    free(pr);




  }

    int main(){

     fun();
     return 0;
    }



