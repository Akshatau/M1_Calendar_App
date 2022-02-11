//Include files
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

//Header Guard
#ifndef CALENDAR_H_
#define CALENDAR_H_

//Include files
#include <stdio.h>
#include <stdlib.h>
#include "string.h"

//structure declaration
typedef struct ToDo todo;
struct ToDo      
{
 char data[100]; //data type-linked list
 todo *link;
 int count;
};

//Function prototypes
//function to return the value for starting day of month of a particular year
/**
 * @brief Get the first weekday object
 * 
 * @param year User input year
 * @return int year
 */
int get_first_weekday(int year);

//Function to return value for number of days present in th month February
/**
 * @brief Construct a new find leap year object
 * 
 * @param year User input year
 */
int find_leap_year(int year);

//Function for user interface
/**
 * @brief Display the calendar view of desired year
 * 
 * @param year Input year
 */
void display_calendar(int year);

/**
 * @brief welcome message at ToDo window
 * 
 */
void welcomeUser_TODO();

/**
 * @brief welcome message at Calendar window
 * 
 * @param year 
 */
void welcomeUser_CALENDAR(int year);

/**
 * @brief function used to display the present ToDo list with elements if present
 * 
 */
void see_ToDo();

/**
 * @brief Create a ToDo object
 * 
 */
void create_ToDo();  //Create a new element

/**
 * @brief Function used to delete elemnts from ToDo list
 * 
 */
void delete_ToDo(); //Delete an element from ToDo

/**
 * @brief used to keep track of number of nodes
 * 
 */
void fixcount();

/**
 * @brief Used to update the ToDo list if any operations are performed
 * 
 */
void update_ToDo();

#endif