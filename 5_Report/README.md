# Calendar Application with To-Do Lists

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
| Code Quality | Project score | Project Quality | Build Status | Static Check  | Unit check| Build project with Make|
|------------------|-----------------------|-------------------|----------------|-------------------|-------|-------|
| ![Code Quality](https://app.codacy.com/project/badge/Grade/8d21a69de0ea47388972f0c781df0a2c) | ![Project Score](https://api.codiga.io/project/31021/score/svg)|![Project Quality](https://api.codiga.io/project/31021/status/svg) | [![Linux C/C++ CI](https://github.com/Akshatau/M1_Calendar_App/actions/workflows/Linux_c-cpp.yml/badge.svg)](https://github.com/Akshatau/M1_Calendar_App/actions/workflows/Linux_c-cpp.yml) | [![Cppcheck](https://github.com/Akshatau/M1_Calendar_App/actions/workflows/Static-check.yml/badge.svg)](https://github.com/Akshatau/M1_Calendar_App/actions/workflows/Static-check.yml) |[![Unit Testing - Unity](https://github.com/Akshatau/M1_Calendar_App/actions/workflows/unity.yml/badge.svg)](https://github.com/Akshatau/M1_Calendar_App/actions/workflows/unity.yml) |[![Makefile CI](https://github.com/Akshatau/M1_Calendar_App/actions/workflows/makefile.yml/badge.svg)](https://github.com/Akshatau/M1_Calendar_App/actions/workflows/makefile.yml)|


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

## Description
* An application used to display calendar details which can be accessed by anyone, anywhere, anytime. It is user-friendly with added advantage of To-Do lists along with calendar.

## Defining Features 
* It support provide calendar and ToDo list facility without internet.
* Program should be simple and user friendly.
* It should be accessible to everyone, anywhere and anythime.

## High Level and Low Level Requirements:
* High Level Requirement

| HLR_ID | LLR_ID | Description  | 
|----------|-------------|------------------------------|
|   HLR_01  |       |      Calendar     |
|  HLR_02   |       |     To-Do List      |

* Low Level Requirement

| HLR_ID | LLR_ID | Description  | 
|----------|-------------|------------------------------|
|   HLR_01  |       |      Calendar view    |
|       | LLR_01 |   Check for leap year  |
|       | LLR_01 | User input year has to be a four digits |
|       | LLR_02 | Find the first weekday of the year |
|      | LLR_03 | Display calendar of 12 months |
|  HLR_02   |       |     To-Do List view      |
|         | LLR_01 | Add ToDos |
|        | LLR_02 | Delete ToDos |
|       | LLR_03 | Display ToDos |
|       | LLR_04 | Count ToDos |

## SWOT Analysis

![swot](https://user-images.githubusercontent.com/46949702/156751377-da27b17a-7dad-4476-9aff-1f9ebdfd3008.png)

## 5W's 1H
![whs](https://user-images.githubusercontent.com/46949702/156751354-b83f003c-998f-4def-b5a6-c3c2bcde9e46.png)

## Research
* In recent times advancements in caledar application include location support, remainders, tasks schedulers, organise meetings.
* In tems of cost we can see many applications are free and most of them are in-built in our system.

# Architecture

## 1) High Level Diagram
* Structural Design:- Functional Diagram

![hll disgram](https://user-images.githubusercontent.com/46949702/156751375-424b16c3-b4a1-4746-83b2-3e94619ede61.png)

* Structural Design:- Data flow Diagram

![data flow](https://user-images.githubusercontent.com/46949702/153708757-31d92478-1279-4682-9250-2fe927ea6489.png) 

* Behavioural Design:- System Flowchart

![OVERALL_FLOWCHART](https://user-images.githubusercontent.com/46949702/153708743-e046ba02-8cfb-4030-90d4-899c918d827a.png)

## 2) Low Level Diagram
* Structural Design:- Functional Diagram (To-Do List System)

![functional diagram](https://user-images.githubusercontent.com/46949702/153708758-fc0476f5-779a-47fd-91ec-87ba23ce6c02.png)
* Behavioural Design:- Use Case Diagram (To-Do List System)

![USE CASE DIAGRAM](https://user-images.githubusercontent.com/46949702/153708737-e53f4004-9620-40e9-bc92-a0b685345b2f.png)
* Behavioural Design:- UML Diagram (Calendar System)

![uml](https://user-images.githubusercontent.com/46949702/156751381-3d66f482-6ea2-4323-9fe8-312628636818.png)





## Folder Structure
Folder          | Description
----------------|----------------------------------------------
`documentation` | Files related to Doxygen documentation
`inc`           | Includes header files
`src`           | Source code file for calendar application
`test`          | All source code and data for testing purposes
`unity`         | Files for unit testing

# Test Plan Flow
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
   
    d) Exit
  
         Exit Mode: End of execution


# Test Plan
* High Level Test Plan

| High Level Test ID | Test Case Objective | Input Data | Expected Output | Actual Output | Status|
|------|---------------------------|--------|----------------|-------------|------------|
| HLT_1 | For calender view | 1| Calendar 1834| Calendar 1834 | SUCCESS|
| HLT_2 | For calender view | 1| Calendar 1794| Calendar 1794 | SUCCESS|
| HLT_3 | For calender view | 1| Calendar 1569| Calendar 1569 | SUCCESS|
| HLT_4 | For calender view | 1| Calendar 2834| Calendar 2834 | SUCCESS|
| HLT_5 | For calender view | 1| Calendar 1934| Calendar 1934 | SUCCESS|

| Test ID | Test Case Objective | Input Data | Expected Output | Actual Output | Status|
|------|---------------------------|--------|----------------|-------------|------------|
|HLT_6| For ToDo List view|2| ToDo List | ToDo List| SUCCESS|
|HLT_7| For ToDo List view|2.2| INVALID | INVALID| SUCCESS|
|HLT_8| For ToDo List view|0.22|INVALID| INVALID| SUCCESS|
|HLT_9| For ToDo List view|2.0| ToDo List | ToDo List| SUCCESS|
|HLT_10| For ToDo List view|2.00| ToDo List | ToDo List| SUCCESS|
#
* Low Level Test Plan 

| Low Level Test ID | Test Case Objective | Input Data | Expected Output | Actual Output | Status|
|------|---------------------------|--------|----------------|-------------|------------|
| LLT_01 | Input year in the format XXXX |2021 | 2021 | 2021 | SUCCESS |
| LLT_02 | Input year in the format XXXX | 2036 | 2036 | 2036 | SUCCESS |
| LLT_03 | Input year in the format XXXX | 200 | 200 | INVALID  | SUCCESS  |
| LLT_04 | Input year in the format XXXX | 0201 | 0201 | INVALID |SUCCESS |
| LLT_05 | Input year in the format XXXX | 22036| 22036 | INVALID | SUCCESS |
| LLT_05 | Input year in the format XXXX |1999 | 1999 | 1999 | SUCCESS |

| Low Level Test ID | Test Case Objective | Input Data | Expected Output | Actual Output | Status|
|------|---------------------------|--------|----------------|-------------|------------|
| LLT_06 | Check if the input year is a leap year | 2000 |Days in February: 28|28| SUCCESS|
| LLT_07 | Check if the input year is a leap year | 1998 |Days in February: 29|29| SUCCESS|
| LLT_08 | Check if the input year is a leap year | 2012 |Days in February: 28|28| SUCCESS|
| LLT_09 | Check if the input year is a leap year | 3540 |Days in February: 29|29| SUCCESS|
| LLT_10 | Check if the input year is a leap year | 2044 |Days in February: 28|28| SUCCESS|
| LLT_11 | Check if the input year is a leap year | 2392 |Days in February: 28|28| SUCCESS|

| Low Level Test ID | Test Case Objective | Input Data | Expected Output | Actual Output | Status|
|------|---------------------------|--------|----------------|-------------|------------|
|LLT_12 | Determine the weekday of first day of the year | 2015 | 4| 4| SUCCESS|
|LLT_13 | Determine the weekday of first day of the year | 2018 | 1| 1| SUCCESS|
|LLT_14 | Determine the weekday of first day of the year | 2016 | 5| 5| SUCCESS|
|LLT_15 | Determine the weekday of first day of the year | 2017 | 0| 0| SUCCESS|
|LLT_16 | Determine the weekday of first day of the year | 2019 | 2| 2| SUCCESS|

| Low Level Test ID | Test Case Objective | Input Data | Expected Output | Actual Output | Status|
|------|---------------------------|--------|----------------|-------------|------------|
|LLT_17| Add ToDo Item to the List| HomeWork | 1.HomeWork |1.HomeWork| SUCCESS|
|LLT_18| Add ToDo Item to the List| TimePass | 1.TimePass |1.TimePass| SUCCESS|
|LLT_19| Add ToDo Item to the List| Walk | 1.Walk |1.Walk| SUCCESS|
|LLT_20| Add ToDo Item to the List| Home Work | 1.Home Work |INVALID| FAIL|
|LLT_21| Add ToDo Item to the List| Work | 1.Work |1.Work| SUCCESS|

# Unit Testing Analysis

| HLL_ID | LLR_ID | Input | Description|Expected output|
|--------|-----------|------|-----------------|------|
| HLL_01 | LLR_02 | 2016 | Decides whether year is leap or not and returns number of days in february|29|
| HLLR_02 | LLR_02 | 2021 | Returns number of days in february | 28|
| HLLR_02 | LLR_02 | 2016 | Returns number of days in february | 29|
| HLLR_02 | LLR_02 | 2020 | Returns number of days in february |29|
| HLLR_02 | LLR_02 | 2022 | Returns number of days in february | 28|
| HLLR_02 | LLR_02 | 2023 | Returns number of days in february | 28|
| HLLR_03| LLR_00 | 2015 | Returns intex of weekday when first day of a year falls|4|
| HLLR_03| LLR_00 | 2016 | Returns intex of weekday when first day of a year falls|5|
| HLLR_03| LLR_00 | 2017 | Returns intex of weekday when first day of a year falls|0|
| HLLR_03| LLR_00 | 2018 | Returns intex of weekday when first day of a year falls|1|
| HLLR_03| LLR_00 | 2019 | Returns intex of weekday when first day of a year falls|2|
 * Execution:
![UNIT](https://user-images.githubusercontent.com/46949702/156761365-4c59034a-cb32-4b3c-adcf-373405d6699c.png)





# Execution Images
## Platform - Visual Studio Code
1) * Welcome user and diplays menu.
   * User selects calendar option.
   * Desired year of user's choice calendar is displayed monthly wise.(For example year=2021)
![11](https://user-images.githubusercontent.com/46949702/156740258-30faab49-6145-47cd-a68e-06a388c30ea6.png)
![22](https://user-images.githubusercontent.com/46949702/156740261-678b6cdc-c080-43d7-afff-d376029e73ba.png)
![33](https://user-images.githubusercontent.com/46949702/156740264-43e3ca95-188a-4094-97d8-e93be0a07dc3.png)
![44](https://user-images.githubusercontent.com/46949702/156740267-e20ecd46-5ef8-475e-9d20-8f1446b76d56.png)
#
2) * Welcome user and diplays menu.
   * User selects ToDo List option.
   * User decides to display List.
   * At start the list is empty message is displayed.
![55](https://user-images.githubusercontent.com/46949702/156740231-8e73524f-5517-4ff9-bed3-484ebd8da765.png)
#
3) * Again ToDo List Menu operations is displayed
   * User selects to add items to list and successfully adds 3 items to list.
![66](https://user-images.githubusercontent.com/46949702/156740241-6906714d-37cd-45fc-ab65-3e17d4b7ca4b.png)
#
4) * User selects TO-DO  from menu list to view elements of list.
   * User selects to delete items from list(i.e., entry no.2)  
![77](https://user-images.githubusercontent.com/46949702/156740244-3837d4f8-4806-41e1-b21c-3bebe225464b.png)
#
5) * After deletion operation   
 ![88](https://user-images.githubusercontent.com/46949702/156740246-1aa8b98f-9f05-441b-8667-da9361f4e9ab.png)
#
6) * User select to add item to list(entry no.3)
![99](https://user-images.githubusercontent.com/46949702/156740249-684ee5dd-f146-4a2c-aee6-14e9b7a3d7ca.png)
#
7) * User selects to quit
![1010](https://user-images.githubusercontent.com/46949702/156740252-d502a58c-2b73-4266-85c2-117abefd4114.png)
#


# References
* https://developpaper.com/c-language-to-realize-the-perpetual-calendar-applet/
* https://www.geeksforgeeks.org/c-program-to-display-month-by-month-calendar-for-a-given-year/
* https://www.youtube.com/watch?v=VRcJpUOKRt8&t=1608s
