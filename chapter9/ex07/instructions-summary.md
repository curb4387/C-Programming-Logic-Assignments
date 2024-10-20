## Your Tasks

In this lab, you complete a partially written C++ program that computes hotel guest rates at Cornwall’s Country Inn. The program is described in _Chapter 9, Exercise 11_. In this program, you should include two overloaded functions named `computeRate()`. One version accepts a number of days and calculates the rate at $99.99 per day. The other accepts a number of days and a code for a meal plan. If the code is A, three meals per day are included, and the price is $169.00 per day. If the code is C, breakfast is included, and the price is $112.00 per day. Each function returns the rate to the calling program where it is displayed. The main program asks the user for the number of days in a stay and whether meals should be included; then, based on the user’s response, the program either calls the first function or prompts for a meal plan code and calls the second function. Comments are included in the file to help you write the remainder of the program.

## Instructions

**Task 1**: Write the first `computeRate()` function that accepts the number of days and returns the day rate.

**Task 2**: Write the second `computeRate()` function that accepts the number of days and meal code and returns the day rate.

An example of the program is shown below:

```
How many days do you plan to stay?
2
Do you want a meal plan? Y or N:
N
The rate for your stay is $199.98
```