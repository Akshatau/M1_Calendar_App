#include "calendar.h"

/**
 * @file calendar.c
 * @author Akshata Unkal (you@domain.com)
 * @brief Calendar application with ToDo list
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

int get_first_weekday(int year);
int find_leap_year(int year);
void display_calendar(int year);
void welcomeUser_TODO();
void welcomeUser_CALENDAR(int year);
void see_ToDo();
void create_ToDo();
void delete_ToDo();
void fixcount();
void update_ToDo();
char *gets(char *str);


int get_first_weekday(int year)
{
  int d;
  //Gibborian rule to find day of a year
  d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
  return d;
}


int find_leap_year(int year)
{
    int DaysInAMonth;
    if((year%4==0&&year%100!=0)||year%400==0) //To find leap year condition
        DaysInAMonth=29;  //If the year is leap year, number of days in February is 29
    else
        DaysInAMonth=28;  //If the year is leap year, number of days in February is 28
    return DaysInAMonth;
}


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
      printf("\n\n---------------%s %d-------------------\n",months[month],year); //printing headers of month with days
      printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");

      for(weekDay=0;weekDay<startingDay;weekDay++)
        printf("     "); //Intermediate spacing between two days

      for(day=1;day<=daysInMonth;day++)
      {
        printf("%5d",day);

        if(++weekDay>6)   //supports 7 weekdays staring from 0
        {
            printf("\n");
            weekDay=0;
        }
        startingDay=weekDay;  //Assign weekday to corresponding months;

   }
    }
  
   printf("\n-----------------------------------------------------\n");
   printf(" !!!! THANK-YOU !!!!    \n");
}

todo *start=NULL; //first node

void welcomeUser_TODO()
{
   printf("\n\n");
    printf("================================================\n");
   printf("\t       TO-DO LIST MENU               \n");
   printf("================================================\n");
}

void welcomeUser_CALENDAR(int year)
{
   printf("\n\n");
   printf("==============================================\n");
   printf("\t       CALENDAR %d                  \n",year);
   printf("==============================================\n");

}

void see_ToDo()
{
    todo *temp;
   temp=start;
        if(start==NULL)  //No elements
        {
           printf("\nNo items in your TODO list !!!!\n");
        }
        printf("\n::::::::::::::::::::::::::::::::::::: \n");
        printf(  "        YOUR TO-DO List           \n");
           printf("::::::::::::::::::::::::::::::::::::: \n");
       while(temp!=NULL) //Access; elemnts one by one
       {
          printf("%d)",temp->count);
          puts(temp->data);
          fflush(stdin);
          temp=temp->link;
       }
          printf("::::::::::::::::::::::::::::::::::::: \n");
       printf("\n\n");
   }

void create_ToDo()  //Create a new element
{
    char k;
    todo *t,*temp;
    while(1){
     
        printf("Do want to ADD ToDos? {y/n} : \n");
       k=getchar();
       scanf(" %c",&k);
       if(k=='N' || k=='n')     //If user wishes not to add element to ToDo
            break;
      else if(k=='Y' || k=='y')
       {
        if(start==NULL)  //list is empty
        {
        t=(todo *)calloc(1,sizeof(todo));
        start=t;
        printf("\nADD item : "); //Message display
        fflush(stdin);
        scanf("%s",(t->data));
        t->count=1;
        start->link=NULL;
        printf("\nADDED SUCCESSFUL... \n");
       }
       else
       {
       temp=(todo *)calloc(1,sizeof(todo));
       printf("\nADD item : "); //Message display
       fflush(stdin);
       scanf("%s",(temp->data));
       temp->link=NULL;
        t=start;
      while(t->link!=NULL){
        t=t->link;
      }
      t->link=temp;
       printf("\nADDED SUCCESSFUL... \n");
       }
        fixcount();
      }
        else{
          printf("INVALID CHOICE !!!\n");
           break;
           }
    }
}

void delete_ToDo() //Delete an element from ToDo
{
  int d;
  todo *temp1,*temp;
  
  printf("\nEnter the no. of the Todo you want to remove : ");
  scanf("%d",&d);
  temp1=start;
  temp=start->link;
  while(1){
  if(temp1->count==d)
    {
    start=start->link;
    free(temp1);
    fixcount();
    break;
    }
    if(temp->count==d)
    {
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
 printf("Your ToDo is deleted...\n");
}

void fixcount()
{
  todo *temp;
  //todo *start=NULL; //first node
  int i=1;
  temp=start;
  while(temp!=NULL)
    {
    temp->count=i;
    i++;
    temp=temp->link;
  }

}
