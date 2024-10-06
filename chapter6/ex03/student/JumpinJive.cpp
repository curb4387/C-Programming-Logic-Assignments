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

   // Get user input
   cout << "Enter coffee add-in or XXX to quit: ";
   cin >> addIn;
	
   // Write the rest of the program here.
   int count = 0;
   while(count < NUM_ITEMS && foundIt == false) {
      if(addIn == addIns[count]) {
         foundIt == true;
         cout << addIns[count] << " price is $" << addInPrices[count] << endl;
         orderTotal = orderTotal + addInPrices[count];
      } else if(addIn == "XXX") {
         break;
      }
      count += 1;
      cout << "Enter coffee add-in or XXX to quit: ";
      cin >> addIn;
   }

   if(foundIt == true) {
      cout << "Order Total is $" << orderTotal;
   } else {
      cout << "Sorry we do not carry that.";
   }

   return 0;
} 