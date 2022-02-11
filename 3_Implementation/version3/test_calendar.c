#include "unity.h"
//#include "main.h"
int check_leap_year(int year)
{
    if((year%4==0&&year%100!=0)||year%400==0)
        return 29;
    else return 28;
}
int get_1st_weekday(int year)
{

  int d;
  d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
  return d;
}

void setUp()
{
}

void tearDown()
{
}
void test_check(void)
{
    // Unity test cases to find whether a year is a leap year or not.
    //actual_result = check_leap_year( year);
    TEST_ASSERT_EQUAL(29, check_leap_year(2016));
    TEST_ASSERT_EQUAL(28, check_leap_year(2017));
    TEST_ASSERT_EQUAL(28, check_leap_year(2018));
    TEST_ASSERT_EQUAL(28, check_leap_year(2019));
    TEST_ASSERT_EQUAL(29, check_leap_year(2020));
    TEST_ASSERT_EQUAL(28, check_leap_year(2021));
    TEST_ASSERT_EQUAL(28, check_leap_year(2022));
    TEST_ASSERT_EQUAL(28, check_leap_year(2023));


       //actual_result= get_1st_weekday(year));
     TEST_ASSERT_EQUAL(4, get_1st_weekday(2015));
     TEST_ASSERT_EQUAL(5, get_1st_weekday(2016));
     TEST_ASSERT_EQUAL(0, get_1st_weekday(2017));
     TEST_ASSERT_EQUAL(1, get_1st_weekday(2018));
     TEST_ASSERT_EQUAL(2, get_1st_weekday(2019));
     TEST_ASSERT_EQUAL(3, get_1st_weekday(2020));
     TEST_ASSERT_EQUAL(5, get_1st_weekday(2021));
     TEST_ASSERT_EQUAL(6, get_1st_weekday(2022));
     TEST_ASSERT_EQUAL(0, get_1st_weekday(2023));
}


int test_main()
{
    UNITY_BEGIN();
    RUN_TEST(test_check);
    return UNITY_END();
}