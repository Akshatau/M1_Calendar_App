#include "main.h"
extern void test_main();
int main()
{

    #if 0
   system("Color 3F");
   int year;
   printf("\nEnter your desired year:");
   scanf("%d",&year);
   display_calendar(year);
    #else
    test_main();
    #endif
   return 0;
}
