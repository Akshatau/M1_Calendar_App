#include "calendar.h"

int main()
{
   
    int year,count=0,yr;
    int choice,option;
    char name[50];
    printf("Your name : ");
    scanf("%s",name);  //Make user friendly

    //printf("\n-----------------------------\n");
     printf("\nHello %s,\n",name);
     printf("What can I do for you?\n\n");
     printf("|---------------------|\n");
     printf("|     MAIN MENU       |\n");
     printf("|---------------------|\n");
     printf("|  1. View Calendar   |\n");  //list of task to either view calendar or use ToDo list
     printf("|  2. TO-DO List      |\n");
     printf("|  3. EXIT            |\n");
     printf("|---------------------|\n");
    printf("\nEnter your choice : ");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
            printf("\nEnter your desired year of calendar in the format XXXX:");
            scanf("%d",&year);   //User input
           yr=year;
            while(yr)
            {
                yr=yr/10;
                count++;
            }
            if(count!= 4){
                printf("INVALID YEAR :( TRY ONCE AGAIN\n");
                printf("THANK-YOU!!!\n");
            }
            else{
            welcomeUser_CALENDAR(year);
            display_calendar(year);
            }
            break;

    case 2:
    while(1){
        //system("color 5F");   //5-Purple(background); F=Bright White(Text)
        //system("cls");    //clear output screen
        welcomeUser_TODO();
        printf("1.See Your ToDo List");    //Menu list of ToDo
        printf("\n2.Add Your ToDo's");     //Operations of ToDo
        printf("\n3.Delete Your ToDo's");
        printf("\n4.Exit");
        printf("\n\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
      case 1:
          see_ToDo();  //Display ToDo
        break;
      case 2:
          create_ToDo(); //Add element into ToDo
        break;
      case 3:
          delete_ToDo();  //Delete element from ToDo
        break;
      case 4:
             exit(0);  //Exit

        }

    }
        break;
 case 3:
 exit(0);

    default:
        printf("Please enter VALID option\n");  //Invalid option
        break;
    }
   
    return 0;

}