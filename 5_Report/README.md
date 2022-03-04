# Calendar Application

![icon](https://user-images.githubusercontent.com/46949702/153708755-9c37c632-5717-4102-9b98-d808e1d11fd3.jpg)      

 A  very simple and basic need for a human being to be organised and complete his works accordingly.                                
                               
#
## Folder Structure
Folder                   | Description
-------------------------| -----------------------------------------
`1_Requirements`         | Documents detailing requirements and research
`2_Architecture     `         | Behavioural and Structural UML Diagrams
`3_Implemenatation `     | All code and documentation
`4_Test plan and output     `       | Documents with test plans and procedures and Output
`5_Report`               | Documentation of whole project
`6_ImagesAndVideos`      | Code Execution Images and Videos
`7_Others`       | Other files

#
## Batches
 
| Code Quality | Project score | Project Quality | Build Status | Static Check  | Unit check|
|------------------|-----------------------|-------------------|----------------|-------------------|--------------|
| ![Code Quality](https://app.codacy.com/project/badge/Grade/8d21a69de0ea47388972f0c781df0a2c) | ![Project Score](https://api.codiga.io/project/31021/score/svg)|![Project Quality](https://api.codiga.io/project/31021/status/svg) | [![Linux C/C++ CI](https://github.com/Akshatau/M1_Calendar_App/actions/workflows/Linux_c-cpp.yml/badge.svg)](https://github.com/Akshatau/M1_Calendar_App/actions/workflows/Linux_c-cpp.yml) | [![Cppcheck](https://github.com/Akshatau/M1_Calendar_App/actions/workflows/Static-check.yml/badge.svg)](https://github.com/Akshatau/M1_Calendar_App/actions/workflows/Static-check.yml) |[![Unit Testing - Unity](https://github.com/Akshatau/M1_Calendar_App/actions/workflows/unity.yml/badge.svg)](https://github.com/Akshatau/M1_Calendar_App/actions/workflows/unity.yml) |


# 1. Certificates
## Course Certifications
### a) Course: C Programming 
       Platform: SoloLearn
       Date of Completion: 02 February, 2022
 ![SoloLearn Certificate](https://user-images.githubusercontent.com/46949702/152684603-736ea0a1-f369-46f6-8f81-de0e71ba0117.png)

### b) Platform: SoloLearn
       Course: C Programming 
       Date of Completion: 02 February, 2022
![netcad](https://user-images.githubusercontent.com/46949702/152684556-84519530-f1a1-4adb-ae8a-55f82c9c48ca.png)
 
### c) Platform: HacherEarth
       Course: C Programming 
       Points Earned: 1030
![hackerearth1](https://user-images.githubusercontent.com/46949702/153260475-10c5262a-4819-42ac-83e1-b007f827bbdf.png)
       

### d) Platform: GitHub
       Course: Introduction to Github
       Date of Completion: 06 February, 2022
  ![github ](https://user-images.githubusercontent.com/46949702/152688149-280fca69-d125-49fe-8bbc-809f82035c7f.png)

# 2. Requirements

# Description
* An application used to display calendar details which can be accessed by anyone, anywhere, anytime. It is user-friendly with added advantage of To-Do lists along with calendar.

## HIGH LEVEL AND LOW LEVEL REQUIREMENTS:
* HLR : High Level Requirement
* LLR : Low Level Requirement

| HLR_ID | LLR_ID | Description  | 
|----------|-------------|------------------------------|
| HLR_01 | LLR_00| Display of calendar |  
| HLR_01 | LLR_01| Change the colour of window to make your page appealing |  
| HLR_01 | LLR_02| Fetch input from the users about year |  
| HLR_01 | LLR_03| Print the headings of calendar with year along with borders | 
| HLR_01 | LLR_04| Print the heading of weekdays of month |
|        |         |                                            | 
|        |         |                                            |
| HLR_02 | LLR_00 | Determine whether input year is a leap year or not | 
| HLR_02 | LLR_01 | Usage of appropriate formulas to find leap year |
| HLR_02 | LLR_02 | According to input year is leap year or not return the number of days in month February |
|        |         |                                            | 
|        |         |                                            |
| HLR_03 | LLR_00 | Locate first day of the year falls on which day |
| HLR_03 | LLR_01 | Usage of formula to find when is first day of year|
|        |         |                                            | 
|        |         |                                            | 
| HLR_04 |LLR_00 | Calender operations|
| HLR_04 |LLR_01 | Change the colour of window to make your page appealing|
| HLR_04 |LLR_02 | Display menu|
| HLR_04 |LLR_03 | Fetch option from the users from a menu|
|        |         |                                            | 
|        |         |                                            |
| HLR_05 | LLR_00| Display of To-Do List window|
| HLR_05 | LLR_01| Clear window|
| HLR_05 | LLR_02| Start to display from first To-Do list item|
| HLR_05 | LLR_03| Access one by one elements and diplay upto last element of list|
| HLR_05 | LLR_04| Print message as Empty when there are no elements in List|
|        |         |                                            | 
|        |         |                                            | 
| HLR_06 | LLR_00| View To-Do List Items|
| HLR_06 | LLR_01| Clear window|
| HLR_06 | LLR_02| Confirm addition of an element to lists|
| HLR_06 | LLR_03 |Access one by one elements and diplay upto last element of list|
| HLR_06 | LLR_03| Print message as Empty when there are no elements in List|
|        |         |                                            |
|        |         |                                            | 
| HLR_07 | LLR_00| Create To-Do List Items|
| HLR_07 | LLR_01| Clear window|
| HLR_07 | LLR_02| Start to display from first To-Do list item|
| HLR_07 | LLR_03| Confirm addition of an element to lists|
| HLR_07 | LLR_04|Create some memory for new element|
| HLR_07 | LLR_05| Addition of elements should be one after the other with first come preferance|
|        |         |                                            | 
|        |         |                                            |
| HLR_08 | LLR_00| Delete To-Do List|
| HLR_08 | LLR_01| Clear window|
| HLR_08 | LLR_02|  Confirm deletion of an element from lists|
| HLR_08 | LLR_03| Free some memory if element is deleted from list|
| HLR_08 | LLR_04| Deletion of an element from list is impposible when list is empty|
|        |         |                                            | 
|        |         |                                            |
| HLR_09 | LLR_00 |Update To-Do List|
| HLR_09 | LLR_01 |Update list with items if any operation like adiition or deletion of items fom list is performed|
|        |         |                                            | 
|        |         |                                            |
| HLR_10 | LLR_02 |Count To-Do List items|
| HLR_10 | LLR_03 |For addition of task operation, increase task count by one|
| HLR_10 | LLR_04 |For deletion of task operation, decrease task count by one
|        |         |                                            | 
|        |         |                                            |
| HLR_11 | LLR_00 |Application should be user friendly|
| HLR_11 | LLR_01 |Clear window|
| HLR_11 | LLR_02 |Change the colour of window to make your page appealing|
| HLR_11 | LLR_03 |Access input from user to switch to calendar mode or To-Do List mode|
| HLR_11 | LLR_04 |Input option|
| HLR_11 | LLR_05 |Display error if other option is choosen|



# SWOT Analysis
## Strengths:.
* Help to keep track of upcomming events.
* Helps to be organised.
* It sets boundaries for incomplete tasks.
* It keeps us accountable.
* Access anywhere, anytime without need of internet.

## Weakness:
* Need physical access to your tool.
* Too many options can make simple event scheduling complicated.
* Expensive

## Opportunites:
* It keeps us accountable.
* Can view calendars of any year.
* Simple and effective tool.
* Day planner.
* Easy to use.

## Threats:
* Calendar tools are either simple or complex.
* Dependent on technology.
* Security Concerns.


# 5W's 1H
* What? 
  A calendar is an application which allows its user to access date i,e., day, month and year details.
* Where?
  These are usually installed on smartphones, computers and can be accessed anywhere.
* When?
  It cab be used offline anytime.
* Why?
  It is used by people to complete their tasks on time and be updated.
* Who?
  It is used by all people(working people,professional people,students).
* How?
  With certain operations, dates are calculated and displayed to users.

## Research
* In recent times advancements in caledar application include location support, remainders, tasks schedulers, organise meetings.
* In tems of cost we can see many applications are free and most of them are in-built in our system.

# Architecture

## Structural Design and Behavioural Design
## a) System Flowchart
![OVERALL_FLOWCHART](https://user-images.githubusercontent.com/46949702/153708743-e046ba02-8cfb-4030-90d4-899c918d827a.png)
#
## b) Functional Diagram
![functional diagram](https://user-images.githubusercontent.com/46949702/153708758-fc0476f5-779a-47fd-91ec-87ba23ce6c02.png)
#
## C) Use case Diagram
![use case diagram](https://user-images.githubusercontent.com/46949702/152684207-1062d514-217e-4df2-b1f4-893374380720.png)
#
## d) Data flow Diagram
![data flow](https://user-images.githubusercontent.com/46949702/153708757-31d92478-1279-4682-9250-2fe927ea6489.png)
#
## e) Behavioural Diagram
![USE CASE DIAGRAM](https://user-images.githubusercontent.com/46949702/153708737-e53f4004-9620-40e9-bc92-a0b685345b2f.png)

## Folder Structure
Folder          | Description
----------------|----------------------------------------------
`documentation` | Files related to Doxygen documentation
`inc`           | Includes header files
`src`           | Source code file for calendar application
`test`          | All source code and data for testing purposes
`unity`         | Files for unit testing

# Test Plan
1. Welcome user with greetings.
2. Diplay menu
    1. Calendar 
    2. ToDo List 
    3. Exit
3. Fetch option from user.
   Calendar Mode:
4. Fetch Year of calendar.
5. Display Calendar.
6. Exit.
   ToDo List Mode:
7. Display all the operations of ToDo List.
   
    a) View 
    b) Create
    c) Delete 
    d) Update 
    e) Exit 
8. Fetch choice.

    a) View:
   - Display stored items of list.
   - Back to Menu.

    b) Create:
   - Confirm addition of item or exit to menu.
   - Add new items to list.
   - Back to menu.

    
    c) Delete:
   - Confirm deletion of item or exit to menu.
   - Delete existing item if any present.
   - Back to menu.

    d) Update:
   - If any operations like add or delete was performed then update list.
   - Back to menu.

    e) Exit
  
         Exit Mode: End of execution

# Test Outcome
a) Menu inputs 
1. Calendar  
2. ToDo List  
3. Exit
- Accepted inputs: 1,2,3
- Error Message: any other choice

b) Menu inputs of ToDo List.
1) View ;
2) Create 
3) Delete 
4) Update 
5) Exit )
-Accepted inputs: 1,2,3,4,5
-Error Message: any other option

c) Deletion of ToDo Lists.
-Error message when no items are in list

## High Level Requirements:
* HLR-1: Display of To-Do List window.
* HLR-2: Application should be user friendly.
* HLR_3: View To-Do List.
* HLR-4: Create To-Do List.
* HLR_5: Delete To-Do List.
* HLR-6: Update To-Do List.
* HLR_7 :Count To-Do List items.
* LLR-8: Calender operations.
* HLR-9: Display of calendar.

# Execution Images
##Platform - Visual Studio Code
1) Welcome user and diplays menu
![2](https://user-images.githubusercontent.com/46949702/153710546-d12353d7-9a95-4621-b635-adbd0813a8fc.png)
#
2)
![1](https://user-images.githubusercontent.com/46949702/153710557-364de34e-7f29-4d0c-990f-aa25855addd6.png)
#
![3](https://user-images.githubusercontent.com/46949702/153710550-af33cf9c-0eb5-45c7-b13c-582966b949a1.png)
#
![4](https://user-images.githubusercontent.com/46949702/153710553-7e1754e1-bb0c-4f30-a329-4dec99182570.png)
#
![5](https://user-images.githubusercontent.com/46949702/153710555-56985aeb-599d-475c-ba96-18badc3cf89b.png)
#
![6](https://user-images.githubusercontent.com/46949702/153710556-f0bfa10a-bb51-4ffd-8c4e-393f3e7578f7.png)
#

# References
* https://developpaper.com/c-language-to-realize-the-perpetual-calendar-applet/
* https://www.geeksforgeeks.org/c-program-to-display-month-by-month-calendar-for-a-given-year/
* https://www.youtube.com/watch?v=VRcJpUOKRt8&t=1608s
