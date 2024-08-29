// This program calculates your age in the year 2050.
// Input:  None
// Output: Your current age followed by your age in 2050

#include <iostream>
using namespace std;

int main()
{

   // Write your code here
   int myNewAge;
   int myCurrentAge = 26;
   int currentYear = 2024;
   const int YEAR = 2050;
   myNewAge = myCurrentAge + (YEAR - currentYear);

   cout << "My Current Age is " << myCurrentAge << "." << endl;
   cout << "I will be " << myNewAge << " in YEAR." << endl;
   
   
   return 0;
}
