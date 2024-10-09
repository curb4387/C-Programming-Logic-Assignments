// Computation.cpp - This program calculates sum, difference, and product of two values.
// Input:  Interactive
// Output:  Sum, difference, and product of two values. 

#include <iostream>
#include <string>
using namespace std;

void sum(double, double);
void difference(double, double);
void product(double, double);

int main() 
{
   double value1;
   double value2;
          	
   cout << "Enter first numeric value: ";
   cin >> value1; 
   cout << "Enter second numeric value: ";
   cin >> value2; 
		
   // Call calculateSum
   sum(value1, value2);
   // Call calculateDifference
   difference(value1, value2);
   // Call calculateProduct 
   product(value1, value2);
   return 0;
} // End of main() function
	
// Write calculateSum function here
void sum(double value1, double value2) {
   double sum = value1 + value2;
   cout << "The sum is " << sum << endl;
   return;
}

// Write calculateDifference function here
void difference(double value1, double value2) {
   double difference =  value1 - value2;
   cout << "The difference is " << difference << endl;
   return;
}

// Write calculateProduct function here
void product(double value1, double value2) {
   double product = value1 * value2;
   cout << "The product is " << product << endl;
   return;
}