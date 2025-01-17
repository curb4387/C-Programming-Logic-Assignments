/* Program Name: BadDate.cpp 
   Function: This program determines if a date entered by the user is valid.  
   Input:  Interactive
   Output: Valid date is printed or user is alerted that an invalid date was entered.
*/  

#include <iostream>
using namespace std;
int main()
{ 

     
  int year;
  int month;
  int day;
  bool validDate = true;
  const int MIN_YEAR = 0, MIN_MONTH = 1, MAX_MONTH = 12, MIN_DAY = 1, MAX_DAY = 31; 
     
  // This is the work of the housekeeping() method
  // Get the year, then the month, then the day
       cout << "Enter year: ";
       cin >> year;
       cout << "Enter month: ";
       cin >> month;
       cout << "Enter day: ";
       cin >> day;
  
  // This is the work of the detailLoop() method
  // Check to be sure date is valid
  if(year <= MIN_YEAR)  // invalid year
     validDate = false;
  else if (month < MIN_MONTH || month > MAX_MONTH)  // invalid month
     validDate = false;
  else if (day < MIN_DAY || day > MAX_DAY) // invalid day
     validDate = false;

  // This is the work of the endOfJob() method
  // Test to see if date is valid and output date and whether it is valid or not
  if(validDate == true)
  { 
     // Output statement
     cout << month << "/" << day << "/" << year << " is a valid date.";
  }
  else
  {
     // Output statement
     cout << month << "/" << day << "/" << year << " is an invalid date.";
  }
     
  return 0;
} // end of main() function