// Cornwall.cpp - This program computes hotel guest rates.
// Input:  None
// Output:  Hotel guest rate

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double computeRate(int);
double computeRate(int, string);

int main() 
{
   int days;
   string mealPlan; 
   string question;
   double rate = 0.0;   
               	
   cout << "How many days do you plan to stay? " << endl;
   cin >> days;
   cout << "Do you want a meal plan? Y or N: " << endl;
   cin >> question;	
  
   // Figure out which arguments to pass to the computeRate() function and
   // then call the computeRate() function							
   if (question == "N") {
      rate = computeRate(days);
   } else if (question == "Y") {
      cout << "Which meal plan do you want? A for 3 meals a day or C for breakfast only." << endl;
      cin >> mealPlan;
      rate = computeRate(days, mealPlan);
   }

   cout << "The rate for your stay is $" << setprecision(2) << fixed << rate << endl;

   return 0;
} // End of main() function
	
	
// Write computeRate functions here.
double computeRate(int days) {
   double rate = 99.99;
   rate = rate * days;
   return rate;
}

double computeRate(int days, string mealPlan) {
   double rate;
   if (mealPlan == "A") {
      rate = 169.00;
      rate = rate * days;
   } else if (mealPlan == "B") {
      rate = 112.00;
      rate = rate * days;
   }
   return rate;
}