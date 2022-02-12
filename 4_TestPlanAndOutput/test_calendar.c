#include "unity.h"
#include "calendar.h"

void setUp()
{
}

void tearDown()
{
}
void test_check_leap_year(void)
{
    // Unity test cases to find whether a year is a leap year or not.
    //actual_result = check_leap_year( year);
    TEST_ASSERT_EQUAL(29, find_leap_year(2016));
    TEST_ASSERT_EQUAL(28, find_leap_year(2017));
    TEST_ASSERT_EQUAL(28, find_leap_year(2018));
    TEST_ASSERT_EQUAL(28, find_leap_year(2019));
    TEST_ASSERT_EQUAL(29, find_leap_year(2020));
    TEST_ASSERT_EQUAL(28, find_leap_year(2021));
    TEST_ASSERT_EQUAL(28, find_leap_year(2022));
    TEST_ASSERT_EQUAL(28, find_leap_year(2023));
}
void test_get_first_weekday(void)
{
       //actual_result= get_1st_weekday(year));
     TEST_ASSERT_EQUAL(4, get_first_weekday(2015));
     TEST_ASSERT_EQUAL(5, get_first_weekday(2016));
     TEST_ASSERT_EQUAL(0, get_first_weekday(2017));
     TEST_ASSERT_EQUAL(1, get_first_weekday(2018));
     TEST_ASSERT_EQUAL(2, get_first_weekday(2019));
     TEST_ASSERT_EQUAL(3, get_first_weekday(2020));
     TEST_ASSERT_EQUAL(5, get_first_weekday(2021));
     TEST_ASSERT_EQUAL(6, get_first_weekday(2022));
     TEST_ASSERT_EQUAL(0, get_first_weekday(2023));
}
void test_display_calendar(void)
{
    TEST_ASSERT_EQUAL( )

}


int test_main()
{
    UNITY_BEGIN();
    RUN_TEST(test_check_leap_year);
    RUN_TEST(test_get_first_weekday);
    RUN_TEST(test_display_calendar);
    return UNITY_END();
}