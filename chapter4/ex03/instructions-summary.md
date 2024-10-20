## Your Tasks

In this lab, you complete a pre-written C++ program that calculates an employee’s productivity bonus and prints the employee’s name and bonus. Bonuses are calculated based on an employee’s productivity score as shown below. A productivity score is calculated by first dividing an employee’s transactions dollar value by the number of transactions and then dividing the result by the number of shifts worked.

| Productivity Score | Bonus |
| -----------------: | :---- |
|               <=30 | $50   |
|              31–69 | $75   |
|             70–199 | $100  |
|             >= 200 | $200  |

## Instructions

Variables have been declared for you, and the input statements and output statements have been written. Read them over carefully before you proceed to the next step.

**Task 1:** Design the logic, and write the rest of the program using a nested `if` statement.

**Task 2:** Execute the program and enter the following as input:

- Employee’s first name: **Kim Smith**
- Number of shifts: **25**
- Number of transactions: **75**
- Transaction dollar value: **40000.00**

An example of the program is shown below:

```
Employee Name: Kim Smith
Employee Bonus: $50
```