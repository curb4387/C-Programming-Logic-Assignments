// JumpinJava.cpp - This program looks up and prints the names and prices of coffee orders.  
// Input:  Interactive
// Output:  Name and price of coffee orders or error message if add-in is not found 

#include <iostream>
#include <string>
using namespace std;

int main()
{
   // Declare variables.
   string addIn;  // Add-in ordered
   const int NUM_ITEMS = 5;  // Named constant
   // Initialized array of add-ins
   string addIns[] = {"Cream", "Cinnamon", "Chocolate", "Amaretto", "Whiskey"}; 
   // Initialized array of add-in prices
   double addInPrices[] = {.89, .25, .59, 1.50, 1.75};
   bool foundIt = false;  // Flag variable
   double orderTotal = 2.00;  // All orders start with a 2.00 charge
   int count = 0;
   // Get user input
   cout << "Enter coffee add-in or XXX to quit: ";
   cin >> addIn;
		
   // Write the rest of the program here. 
   while(count < NUM_ITEMS) {
      if(addIn == addIns[count]) {
         foundIt = true;
         orderTotal = orderTotal + addInPrices[count];
         cout << addIn << " price is $" << addInPrices[count] << endl;
      } else if(addIn == "XXX") {
         cout << "Order total is $" << orderTotal << endl;
         break;
      } else {
         cout << "Sorry we do not carry that." << endl;
      }
      count += 1;
      cout << "Enter coffee add-in or XXX to quit: ";
      cin >> addIn;
   }      

   return 0;
} 