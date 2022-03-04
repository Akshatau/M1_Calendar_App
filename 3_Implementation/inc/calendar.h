/**
 * @file calendar.h
 * @author Akshata Unkal 
 * @brief Header file for Calendar application with ToDo list feature
 * @version 0.1
 * @date 2022-02-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

//header guard
#ifndef CALENDAR_H_
#define CALENDAR_H_

//Include files
#include <stdio.h>
#include <stdlib.h>

//structure declaration
typedef struct ToDo todo;
struct ToDo      
{
 char data[100]; //data type-linked list
 todo *link;
 int count;
};

//Function prototypes
/**
 * @brief function to find on which weekday of the month January does first day of specified year fall
 * @param year User input year
 * @return int value of the index of weekday
 */
int get_first_weekday(int year);

//Function to return value for number of days present in th month February
/**
 * @brief Checks whether input year is a leap year, if it is leap year it returns 29 value else 28 value indicating number of days in February
 * 
 * @param year User input year
 */
int find_leap_year(int year);

//Function for user interface
/**
 * @brief Display the calendar view of desired year with consecutive twelve months
 * 
 * @param year Input year
 */
void display_calendar(int year);

/**
 * @brief displays welcome message to the user through window on ToDo list
 * 
 */
void welcomeUser_TODO();

/**
 * @brief welcome message to the user through window on Calendar 
 * 
 * @param year input
 */
void welcomeUser_CALENDAR(int year);

/**
 * @brief Fnction used to display the present ToDo list with elements present in it
 * 
 */
void see_ToDo();

/**
 * @brief Create a new ToDo object which is stacked on ToDo list
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

#endif