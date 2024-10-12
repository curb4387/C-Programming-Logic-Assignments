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
   for(int x = 0; x < 5; x++) {
      cout << numbers[x] << endl;
   }
   // Call reverseArray() function here		
   reverseArray(numbers);
   // Print contents of reversed array
   cout << "Reversed contents of array:" << endl;
   for(int x = 0; x < 5; x++){
      cout << numbers[x] << endl;
   }
   return 0;
} // End of main() function
	
// Write reverseArray function here.
void reverseArray(int values[]) {
   int temp;
   temp = values[4];
   values[4] = values[0];
   values[0] = temp;
   temp = values[3];
   values[3] = values[1];
   values[1] = temp;
   return;
}
