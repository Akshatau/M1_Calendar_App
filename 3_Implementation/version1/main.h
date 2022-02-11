/**
 * @file main.c
 * @author Akshata Unkal (you@domain.com)
 * @brief Program on Calendar display
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

//Header guard
#ifndef MAIN_H_
#define MAIN_H_

//macros declaration


//Include files
#include <stdlib.h>
#include "stdlib.h"

//Function Prototypes
/**
 * @brief Get the 1st weekday object
 * 
 * @param year Input user choice year
 * @return int Display calendar
 */
int get_1st_weekday(int year);

/**
 * @brief Decide whether a year is leap year or not
 * 
 * @param year Input user choice year
 * @return int return number of days in the month February
 */
int check_leap_year(int year);

/**
 * @brief Display calendar
 * 
 * @param year Input user choice year
 */
void display_calendar(int year);

#endif
