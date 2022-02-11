/**
 * @file main.h
 * @author Akshata Unkal (you@domain.com)
 * @brief application of a calendar
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

//Header guard
#ifndef MAIN_H_
#define MAIN_H_

//macros declaration

//Include files
#include "stdio.h"
#include "stdlib.h"


//Function prototype
/**
 * @brief Get the 1st weekday object
 * 
 * @param year user input year
 * @return int day
 */
int get_1st_weekday(int year);

/**
 * @brief to check leap year
 * 
 * @param year user input year
 * @return int value
 */
int check_leap_year(int year);

/**
 * @brief display calendar
 * 
 * @param year user input year
 */
void display_calendar(int year);

#endif