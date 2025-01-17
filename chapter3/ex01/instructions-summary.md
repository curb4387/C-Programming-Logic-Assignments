## Your Tasks

In this lab, you use the pseudocode found in the figure below to add code to a partially
created C++ program. When completed, college admissions officers should be able to use the
C++ program to determine whether to accept or reject a student, based on his or her test
score and class rank.


```
start
   input testScore, classRank
   if testScore >= 90 then
      if classRank >= 25 then
         output "Accept"
      else
         output "Reject"
      endif
   else
      if testScore >= 80 then
         if classRank >= 50 then
            output "Accept"
         else
            output "Reject"
         endif
      else
         if testScore >= 70 then
            if classRank >= 75 then
               output "Accept"
            else
               output "Reject"
            endif
         else
            output "Reject"
         endif
      endif
   endif
stop
```

## Instructions

**Task 1:** Declare two integer variables named `testScore` and `classRank`.

**Task 2:** Write the interactive input statements to retrieve a student’s test score (`testScore`) and class rank (`classRank`) from the user of the program. Do not forget to prompt the user for the test score and class rank.

The rest of the program is written for you.

Execute the program by entering 87 for the test score and 60 for the class rank.
Execute the program by entering 60 for the test score and 87 for the class rank.

Examples of the program are shown below:

```txt
Enter student's test score: 87
Enter student's class rank: 60
Accept

Enter student's test score: 60
Enter student's class rank: 87
Reject
```