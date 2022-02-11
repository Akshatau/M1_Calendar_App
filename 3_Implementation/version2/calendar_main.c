#include "calendar.h"
int main()
{
    int choice,option;
    char name[50];
    system("Color 6E"); //GUI   6-Yellow(background); E=light Yellow(Text)
    printf("Your name...........\n");
    scanf("%s",name);  //Make user friendly 

    system("pause");
     printf("\nHello %s,\n",name);
     printf("What can I do for you?\n\n");
    printf("1. View Calendar\n");  //list of task to either view calendar or use ToDo list
    printf("2. TO-DO List\n");
    printf("3. EXIT\n\n");
    printf("Enter your choice\n");
    scanf("%d",&option);
    switch(option)
    {
    case 1: system("Color 2F");   //2-Green(background); F=Bright White(Text)
            int year;        
            system("cls");        //clear output screen
            printf("\nEnter your desired year of calendar:");
            scanf("%d",&year);   //User input
            system("pause");    //screen waits for key press
            welcomeUser_CALENDAR(year);
            display_calendar(year);
            break;

    case 2:
    while(1){
        system("color 5F");   //5-Purple(background); F=Bright White(Text)
        system("cls");    //clear output screen
        welcomeUser_TODO();
        printf("\n1.See Your ToDo List");    //Menu list of ToDo
        printf("\n2.Create Your ToDos");     //Operations of ToDo
        printf("\n3.Delete Your ToDos");
        printf("\n4.Update Your ToDos");
        printf("\n5.Exit");
        printf("\n\nEnter your choice..");
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
         update_ToDo();  //Account the operations performed on ToDo
         break;
      case 5:
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
