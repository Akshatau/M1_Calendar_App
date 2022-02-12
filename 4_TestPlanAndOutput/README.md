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

# Test Code Analysis

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




