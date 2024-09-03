// This program calculates an employee's take home pay. 
#include <iostream>
using namespace std;
int main()
{
   double salary = 1250.00;
   double stateTax;
   double federalTax;
   double numDependents = 2;
   double dependentDeduction;
   double totalWithholding;
   double takeHomePay;

   // Calculate state tax here
   stateTax = salary * 0.065;
   cout << "State Tax: $" << stateTax << endl;
   // Calculate federal tax here
   federalTax = salary * 0.280;
   cout << "Federal Tax: $" << federalTax << endl;
   // Calculate dependent deduction here
   dependentDeduction = (salary * 0.025) * numDependents;
   cout << "Dependents: $" << dependentDeduction << endl;
   // Calculate total withholding here
   totalWithholding = stateTax + federalTax;
   cout << "Total Withholding: $" << totalWithholding << endl;
   // Calculate take-home pay here
   takeHomePay = (salary - totalWithholding) + dependentDeduction;
   cout << "Salary: $" << salary << endl;
   cout << "Take-Home Pay: $" << takeHomePay << endl;
   return 0;
}