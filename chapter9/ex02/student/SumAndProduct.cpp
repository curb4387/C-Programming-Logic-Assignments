// SumAndProduct.cpp - This program computes sums and products 
// Input:  Interactive
// Output:  Computed sum and product 

#include <iostream>
#include <string>
using namespace std; 

void sums(int);
void products(int);

int main() 
{
   double number;              	
   						
   cout << "Enter a positive integer or 0 to quit: ";
   cin >> number; 

   while(number != 0)
   {		
      // Call sums function here 
      sums(number);
      // Call products function here
      products(number);
      cout << "Enter a positive integer or 0 to quit: ";
      cin >> number; 
   }
   return 0;
} // End of main function
	
// Write sums function here
void sums(int number) {
   int sum = 0;
   int count = 1;
   while (count <= number) {
      sum += count;
      count += 1;
   }
   cout << sum << endl;
   return;
}

// Write products function here
void products(int number) {
   int product = 1;
   int count = 1;
   while (count <= number) {
      product *= count;
      count += 1;
   }
   cout << product << endl;
   return;
}