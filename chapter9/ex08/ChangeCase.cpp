// ChangeCase.cpp - This program converts characters to lowercase and uppercase.
// Input:  Interactive
// Output:  Uppercase and lowercase versions of the user-entered string
#include <iostream>
#include <string>
using namespace std;

string convertToString(char*, const int);

int main() 
{
   const int LEN = 9;
   char sample1[LEN];
   char sample2[LEN];
   char result1;
   char result2;
   int i; 
   string toLower = "";
   string toUpper = "";
   cout << "Enter 9 lowercase characters: ";
   for(i = 0; i < LEN; i++)		 
   {
      cin >> sample1[i];
      sample1[i] = toupper(sample1[i]);
      toUpper = convertToString(sample1, LEN);
   }
   cout << toUpper << endl;
   cin.ignore(256,'\n');
   cout << "Enter 9 uppercase characters: ";
   for(i = 0; i < LEN; i++)		 
   {
      cin >> sample2[i];
      sample2[i] = tolower(sample2[i]);
      toLower = convertToString(sample2, LEN);
   }
   cout << toLower << endl;
   cin.ignore(256,'\n');
   return 0;

} // End of main() function
string convertToString(char* sample, const int LEN) {
   int i;
   string converted = "";
   for (i = 0; i < LEN; i++) {
      converted = converted + sample[i];
   }
   return converted;
}