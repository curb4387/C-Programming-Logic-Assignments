## Your Tasks

In this lab, you will complete a C++ program that uses a two-dimensional array to store data for the Building Block Day Care Center.

The day care center charges varying weekly rates depending on the age of the child and the number of days per week the child attends. The program should allow the user to enter the age of the child and the number of days per week the child will be at the day care center. The program should output the appropriate weekly rate.

The file provided for this lab contains all of the necessary variable declarations, except the two-dimensional array. You need to write the input statements and the code that initializes the two-dimensional array, determines the weekly rate, and prints the weekly rate.

Comments in the code tell you where to write your statements. Weekly rates can be found in the provided table:

| <nobr>Age:</nobr> | 1                  | 2                  | 3                  | 4                   | 5                   |
| ----------------- | ------------------ | ------------------ | ------------------ | ------------------- | ------------------- |
| **0**             | 30.00              | 60.00              | 88.00              | <nobr>115.00</nobr> | <nobr>140.00</nobr> |
| **1**             | 26.00              | 52.00              | 70.00              | 96.00               | 120.00              |
| **2**             | 24.00              | 46.00              | 67.00              | 89.00               | 110.00              |
| **3**             | 22.00              | 40.00              | 60.00              | 75.00               | 88.00               |
| **4 +**           | <nobr>20.00</nobr> | <nobr>35.00</nobr> | <nobr>50.00</nobr> | 66.00               | 84.00               |

<sup>_Table 8-2_</sup>

## Instructions

**Task 1**: Initialize the two-dimensional array and write the C++ statements that retrieve the age of the child and the number of days the child will be at the day care center. Determine and print the weekly rate.

An example of the program is shown below:

```
Enter the age of the child or 99 to quit: 2
Enter number of days: 3
Weekly charge is $67.0
```