//Include files
#include <stdio.h>
#include <stdlib.h>

//function to return the value for starting day of month of a particular year
int get_first_weekday(int year)
{
  int d;
  //Gibborian rule to find day of a year
  d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
  return d;
}

//Function to return value for number of days present in th month February
find_leap_year(int year)
{
    int DaysInAMonth;
    if((year%4==0&&year%100!=0)||year%400==0) //To find leap year condition
        DaysInAMonth=29;  //If the year is leap year, number of days in February is 29
    else
        DaysInAMonth=28;  //If the year is leap year, number of days in February is 28
    return DaysInAMonth;
}

//Function for user interface
void display_calendar(int year)
{
    int month,day,daysInMonth,weekDay=0;

    char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};
    //Total number of days in every month

     monthDay[1]=find_leap_year(year);  //Rewrite the number of days in month February if it is a leap year

    int startingDay=get_first_weekday(year); //Assign the first day of month(like Sunday, Monday.....)

   for(month=0;month<12;month++)
    {

      daysInMonth=monthDay[month];
      printf("\n\n---------------%s %d-------------------\n",months[month],year);
      printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");

      for(weekDay=0;weekDay<startingDay;weekDay++)
        printf("     ");

      for(day=1;day<=daysInMonth;day++)
      {
        printf("%5d",day);

        if(++weekDay>6){
            printf("\n");
            weekDay=0;
        }
        startingDay=weekDay;
      }

   }
}

typedef struct ToDo todo;

struct ToDo
{
 char data[100];
 todo *link;
 int count;
};

todo *start=NULL;
int main()
{
    int choice,option;
    char name[50];
    //system("Color 6E");
    printf("Your name...........\n");
    scanf("%s",name);

     // system("pause");
     printf("\nHello %s,\n",name);
     printf("What can I do for you?\n\n");
    printf("1. View Calendar\n");
    printf("2. TO-DO List\n");
    printf("3. Exit\n\n");
    printf("Enter your choice\n");
    scanf("%d",&option);
    switch(option)
    {
    case 1:// system("Color 2F");
            int year;
           // system("cls");
            printf("\nEnter your desired year of calendar:");
            scanf("%d",&year);
            system("pause");
            welcomeUser_CALENDAR(year);
            display_calendar(year);
            break;

    case 2:
    while(1){
       // system("color 5F");
       // system("cls");
        welcomeUser_TODO();
        printf("\n1.See Your ToDo List");
        printf("\n2.Create Your ToDos");
        printf("\n3.Delete Your ToDos");
        printf("\n4.Update Your ToDos");
        printf("\n5.Exit");
        printf("\n\nEnter your choice..");
        scanf("%d",&choice);
        switch(choice)
        {
      case 1:
          seeToDo();
        break;
      case 2:
          createToDo();
        break;
      case 3:
          delToDo();
        break;
      case 4:
         updateToDo();
         break;
      case 5:
        exit(0);

        }

    }
        break;

    default:
        printf("Please enter VALID option\n");
        break;
    }
}

void welcomeUser_TODO()
{
  // system("color 5F");
   printf("\n\n");
    printf("================================================\n");
   printf("\t       TO-DO LIST                 \n");
   printf("================================================\n");

   system("pause");
}

void welcomeUser_CALENDAR(int year)
{
   //system("color 2F");
   printf("\n\n");
   printf("================================================\n");
   printf("\t       CALENDAR %d                  \n",year);
   printf("================================================\n");

}


void seeToDo(){
   system("cls");
   todo *temp;
   temp=start;
        if(start==NULL){
           printf("\nEmpty TODO\n\n");
        }

       while(temp!=NULL){
          printf("%d)",temp->count);
          puts(temp->data);
          fflush(stdin);
          temp=temp->link;
       }
       printf("\n\n\n");
       system("pause");
   }

void createToDo()
{
    char k;
    todo *t,*temp;
    system("cls");
    while(1){
        printf("\nWant to add? Y/N\n");
        fflush(stdin);
        scanf("%c",&k);
        if(k=='N')
            break;
       else{
        if(start==NULL){
        t=(todo *)calloc(1,sizeof(todo));
        start=t;
        printf("\nADD it..\n");
        fflush(stdin);
        gets(t->data);
        t->count=1;
        start->link=NULL;
       }
       else{
       temp=(todo *)calloc(1,sizeof(todo));
       printf("\nADD it..\n");
       fflush(stdin);
       gets(temp->data);
       temp->link=NULL;
       t->link=temp;
       t=t->link;
     }
     fixcount();
    }
   }
}

void delToDo()
{
  system("cls");
  int d;
  todo *temp1,*temp;
  printf("\nEnter the no of the todo you want to remove\n");
  scanf("%d",&d);
  temp1=start;
  temp=start->link;
  while(1){
  if(temp1->count==d){
    start=start->link;
    free(temp1);
    fixcount();
    break;
  }
    if(temp->count==d){
        temp1->link=temp->link;
        free(temp);
        fixcount();
        break;
    }
    else{
        temp1=temp;
        temp=temp->link;
    }
}
system("pause");
}

void fixcount()
{
  todo *temp;
  int i=1;
  temp=start;
  while(temp!=NULL)
    {
    temp->count=i;
    i++;
    temp=temp->link;
  }

}

void updateToDo()
{
  system("cls");
  todo *temp,*t;
  char k;
  while(1)
    {
        printf("\nWant to add?y/n\n");
        fflush(stdin);
        scanf("%c",&k);
        if(k=='n')
            break;
       printf("\nADD it..\n");
       temp=(todo *)calloc(1,sizeof(todo));
       fflush(stdin);
       gets(temp->data);
       temp->link=NULL;
       t=start;
      while(t->link!=NULL)
      {
        t=t->link;
      }
      t->link=temp;
      fixcount();
    }
printf("\n\n");
system("pause");
}
