## Your Tasks

In this lab, you will make additions to a C++ program provided. The program is a guessing game. A random number between 1 and 10 is generated in the program. The user enters a number between 1 and 10, trying to guess the correct number. If the user guesses correctly, the program congratulates the user and then the loop that controls guessing numbers exits; otherwise, the program asks the user if they want to guess again. If the user enters **Y**, they can guess again. If the user enters **N**, the loop exits. You can see that the "Y" or "N" is the sentinel value that controls the loop. Note that the entire program has been written for you. You need to add code that validates correct input, which is "Y" or "N" when the user is asked if they want to guess a number, and a number in the range of 1 through 10 when the user is asked to guess a number.

## Instructions

Comments have been included in the code to help you identify where these loops should be written.

**Task 1**: Write loops that validate input at all places in the code where the user is asked to provide input.

**Task 2**: The program can be executed several times to ensuring the random number changes.

An example of the program is shown below:

```
Do you want to guess a number? Enter Y or N: Y
I'm thinking of a number...
Try to guess by entering a number between 1 and 10: 2
That's not correct. Do you want to guess again? Enter Y or N: Y
I'm thinking of a number...
Try to guess by entering a number between 1 and 10: 5
That's not correct. Do you want to guess again? Enter Y or N: N
```