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

## Opportunites:
* It keeps us accountable.
* Can view calendars of any year.
* Simple and effective tool.
* Day planner.
* Easy to use.

## Threats:
* Calendar tools are either simple or complex.
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

# Research
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

# Test Plan
| Test ID | Test Case Objective | Input Data | Expected Output | Actual Output | Status|
|------|---------------------------|--------|----------------|-------------|------------|
| T_01 | Input year in the format XXXX | XXXX | 2021 | 2021 | SUCCESS |
| T_02 | Check if the input year is a leap year | 2016 |Days in February: 28|28| SUCCESS|
|T_03 | Determine the weekday of first day of the year | 2015 | 4| 4| SUCCESS|
| T_04 | For calender view | 1| Calendar XXXX| Calendar XXXX | SUCCESS|
|T_05| For ToDo List view|2| ToDo List | ToDo List| SUCCESS|
|T_06| Add ToDo Item to the List| HomeWork | 1.HomeWork |1.HomeWork| SUCCESS|

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
