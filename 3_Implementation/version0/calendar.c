#include <stdio.h>
#include <stdlib.h>

int get_1st_weekday(int year){

  int d;
  d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
  return d;
}

check_leap_year(int year)
{
    if((year%4==0&&year%100!=0)||year%400==0)
        return 29;
    else return 28;
}

void display_calendar(int year)
{
    int month,day,daysInMonth,weekDay=0;

    char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};

     monthDay[1]=check_leap_year(year);

    int startingDay=get_1st_weekday(year);

   for(month=0;month<12;month++)
    {

      daysInMonth=monthDay[month];
      printf("\n\n---------------%s-------------------\n",months[month]);
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

struct ToDo{
 char data[100];
 todo *link;
 int count;
};

todo *start=NULL;
int main()
{
    int choice,option;
    system("Color 4B");
    //printf("OPTIONS\n");
    printf("1. Calendar\n");
    printf("2. TO-DO List\n");
    printf("Enter your choice\n");
    scanf("%d",&option);
    switch(option)
    {
    case 1: system("Color 3F");
            int year;
            printf("\nEnter your desired year:");
            scanf("%d",&year);
            display_calendar(year);

           break;

    case 2:
    welcomeUser();
    while(1){
        system("color 3F");
        system("cls");
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
    }
}

void welcomeUser(){
   system("color 4F");
   printf("\n\n\n\n\n");
   printf("\t------------------------------------------------------------------------------------------------------\n\n");
   printf("\t#################################### YOUR TODO LIST APP ##############################################\n\n");
   printf("\t------------------------------------------------------------------------------------------------------");
   printf("\n\n\n\t\t*******************************WELCOME*******************************\n\n\n\n\n\n\n\n\n\t");
   system("pause");
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

void createToDo(){
    char k;
    todo *t,*temp;
    system("cls");
    while(1){
        printf("\nWant to add?y/n");
        fflush(stdin);
        scanf("%c",&k);
        if(k=='n')
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

void delToDo(){
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
        printf("\nWant to add?y/n");
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
