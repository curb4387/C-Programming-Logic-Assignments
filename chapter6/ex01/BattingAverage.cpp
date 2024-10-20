#include <iostream>
#include <string>
using namespace std;

int main()
{
   // Declare a named constant for array size here   
   int SIZE = 8;
   // Declare array here
   double averages[SIZE];
   // Use this variable to store the batting average input by user
   double battingAverage;

   // Use these variables to store the minimum and maximum values
   double min, max;

   // Use these variables to store the total and the average
   double total, average; 

   // Write a loop to get batting averages from user and assign to array
   for(int i = 0; i < SIZE; i++) {
      cout << "Enter a batting average: ";
      cin >> battingAverage;
      // Assign value to array
      averages[i] = battingAverage;
   }

   // Assign the first element in the array to be the minimum and the maximum
   min = averages[0];
   max = averages[0];
   // Start out your total with the value of the first element in the array
   total = averages[0]; 
   // Write a loop here to access array values starting with averages[1]
   for(int i = 1; i < SIZE; i++) {
      // Within the loop test for minimum and maximum averages.
      if(averages[i] < min) {
         min = averages[i];
      }
      if(averages[i] > max) {
         max = averages[i];
      }
      // Also accumulate a total of all averages     
      total = total + averages[i];
   }
   // Calculate the average of the 8 batting averages   
   average = total / SIZE;
   // Print the batting averages stored in the averages array 
   for(int i = 0; i < SIZE; i++) {
      cout << "Average " << i << " is " << averages[i] << endl;
   }
   // Print the maximum batting average, minimum batting average, and average batting average
   cout << "Minimum batting average is " << min << endl;
   cout << "Maximum batting average is " << max << endl;
   cout << "Average batting average is " << average << endl;
   return 0;
}