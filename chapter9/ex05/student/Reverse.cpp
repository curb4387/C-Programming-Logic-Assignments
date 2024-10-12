// Reverse.cpp - This program reverses numbers stored in an array.
// Input:  None
// Output:  Original contents of array and the reversed contents of the array. 

#include <iostream>
#include <string>
using namespace std;

void reverseArray(int[]);

int main() 
{
   int numbers[] = {9, 8, 7, 6, 5};
   int x;
   // Print contents of array
   cout << "Original contents of array:" << endl;
   for(int x = 0; x < 5; x++)
      cout << numbers[x] << endl;
   // Call reverseArray() function here		
   reverseArray(numbers);
   // Print contents of reversed array
   cout << "Reversed contents of array:" << endl;
   for(int x = 0; x < 5; x++)
      cout << numbers[x] << endl;
   return 0;
} // End of main() function
	
// Write reverseArray function here.
void reverseArray(int numbers[]) {
   for(int x = 0; x < 5 / 2; x++) {
      int temp = numbers[x];
      numbers[x] = numbers[5 - x - 1];
      numbers[5 - x - 1] = temp;
   return;
   }
}
