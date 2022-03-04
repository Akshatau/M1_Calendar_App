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

| Test ID | Test Case Objective | Input Data | Expected Output | Actual Output | Status|
|------|---------------------------|--------|----------------|-------------|------------|
| T_17 | For calender view | 1| Calendar 1834| Calendar 1834 | SUCCESS|
| T_18 | For calender view | 1| Calendar 1794| Calendar 1794 | SUCCESS|
| T_19 | For calender view | 1| Calendar 1569| Calendar 1569 | SUCCESS|
| T_20 | For calender view | 1| Calendar 2834| Calendar 2834 | SUCCESS|
| T_21 | For calender view | 1| Calendar 1934| Calendar 1934 | SUCCESS|

| Test ID | Test Case Objective | Input Data | Expected Output | Actual Output | Status|
|------|---------------------------|--------|----------------|-------------|------------|
|T_22| For ToDo List view|2| ToDo List | ToDo List| SUCCESS|
|T_23| For ToDo List view|2.2| INVALID | INVALID| SUCCESS|
|T_24| For ToDo List view|0.22|INVALID| INVALID| SUCCESS|
|T_25| For ToDo List view|2.0| ToDo List | ToDo List| SUCCESS|
|T_26| For ToDo List view|2.00| ToDo List | ToDo List| SUCCESS|

* Low Level Test Plan 

| Test ID | Test Case Objective | Input Data | Expected Output | Actual Output | Status|
|------|---------------------------|--------|----------------|-------------|------------|
| T_01 | Input year in the format XXXX |2021 | 2021 | 2021 | SUCCESS |
| T_02 | Input year in the format XXXX | 2036 | 2036 | 2036 | SUCCESS |
| T_03 | Input year in the format XXXX | 200 | 200 | INVALID  | SUCCESS  |
| T_04 | Input year in the format XXXX | 0201 | 0201 | INVALID |SUCCESS |
| T_05 | Input year in the format XXXX | 22036| 22036 | INVALID | SUCCESS |
| T_05 | Input year in the format XXXX |1999 | 1999 | 1999 | SUCCESS |

| Test ID | Test Case Objective | Input Data | Expected Output | Actual Output | Status|
|------|---------------------------|--------|----------------|-------------|------------|
| T_06 | Check if the input year is a leap year | 2000 |Days in February: 28|28| SUCCESS|
| T_07 | Check if the input year is a leap year | 1998 |Days in February: 29|29| SUCCESS|
| T_08 | Check if the input year is a leap year | 2012 |Days in February: 28|28| SUCCESS|
| T_09 | Check if the input year is a leap year | 3540 |Days in February: 29|29| SUCCESS|
| T_10 | Check if the input year is a leap year | 2044 |Days in February: 28|28| SUCCESS|
| T_11 | Check if the input year is a leap year | 2392 |Days in February: 28|28| SUCCESS|

| Test ID | Test Case Objective | Input Data | Expected Output | Actual Output | Status|
|------|---------------------------|--------|----------------|-------------|------------|
|T_12 | Determine the weekday of first day of the year | 2015 | 4| 4| SUCCESS|
|T_13 | Determine the weekday of first day of the year | 2018 | 1| 1| SUCCESS|
|T_14 | Determine the weekday of first day of the year | 2016 | 5| 5| SUCCESS|
|T_15 | Determine the weekday of first day of the year | 2017 | 0| 0| SUCCESS|
|T_16 | Determine the weekday of first day of the year | 2019 | 2| 2| SUCCESS|

| Test ID | Test Case Objective | Input Data | Expected Output | Actual Output | Status|
|------|---------------------------|--------|----------------|-------------|------------|
|T_27| Add ToDo Item to the List| HomeWork | 1.HomeWork |1.HomeWork| SUCCESS|
|T_28| Add ToDo Item to the List| TimePass | 1.TimePass |1.TimePass| SUCCESS|
|T_29| Add ToDo Item to the List| Walk | 1.Walk |1.Walk| SUCCESS|
|T_30| Add ToDo Item to the List| Home Work | 1.Home Work |INVALID| FAIL|
|T_31| Add ToDo Item to the List| Work | 1.Work |1.Work| SUCCESS|

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


