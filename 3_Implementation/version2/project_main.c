#include "main.h"
int main()
{
   system("Color 3F");
   int year;
   printf("\nEnter your desired year:");
   scanf("%d",&year);
   display_calendar(year);

   return 0;
}
