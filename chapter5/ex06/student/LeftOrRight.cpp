// LeftOrRight.cpp - This program calculates the total number of left-handed and right-handed students in a class.   
// Input:  L for left-handed; R for right handed; X to quit.
// Output: Prints the number of left-handed students and the number of right-handed students. 

#include <iostream>
#include <string>
using namespace std; 
int main()
{
   string leftOrRight = "";  // L or R for one student.
   int rightTotal = 0;  // Number of right-handed students.
   int leftTotal = 0;  // Number of left-handed students.
		
   cout << "Enter an L if you are left-handed, a R if you are right-handed or X to quit: ";
   cin >> leftOrRight;  

   // Write your loop here.

   // Output number of left or right-handed students.	
   cout << "Number of left-handed students: " << leftTotal << endl;
   cout << "Number of right-handed students: " << rightTotal << endl;
		
   return 0;
}