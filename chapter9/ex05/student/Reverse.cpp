// Reverse.cpp - This program reverses numbers stored in an array.
// Input:  None
// Output:  Original contents of array and the reversed contents of the array. 

#include <iostream>
#include <string>
using namespace std;

void reverseArray(int []);

int main() 
{
   int numbers[] = {9, 8, 7, 6, 5};
   int x;
// Print contents of array
   cout << "Original contents of array:" << endl;
   x = 5;
   for(int i = 0; i < x; i++) {
      cout << numbers[i] << endl;
   }
   // Call reverseArray() function here		
   reverseArray(numbers);
   // Print contents of reversed array
   cout << "Reversed contents of the array:" << endl;
   for(int i = 0; i < x; i++) {
      cout << numbers[i] << endl;
   }

   return 0;
} // End of main() function
	
// Write reverseArray function here.
void reverseArray(int numbers[]) {
   int sub;
   for(sub = 0; sub < 5; sub++) {
      int temporary = numbers[sub];
      numbers[sub] = numbers[5 - sub - 1];
      numbers[5 - sub - 1] = temporary;
   return;
   }
}