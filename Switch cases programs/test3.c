//3. Write a program which takes the day number of a week and displays a
//unique greeting message for the day.

  #include<stdio.h>
  int  main(void){
    int days;
    printf("Please enter the day number ");
    scanf("%d", &days);
      switch(days){
    case 7:
          printf("Happy Sunday");
         break;
    case 1:
        printf("Happy Monday");
        break;
    case 2:
        printf("Congrats its Tuesday");
        break;
    case 3:
        printf("Congrats its Wednesday ");
        break;
    case 4:
        printf("Happy Thursday");
        break;
    case 5:
        printf("good Friday");
        break;
         case 6:
        printf("good  Saturday");
        break;

    default :
        printf("Invalid days number");
      }



    return 0;
   }
