// This program calculates profits and sales prices for a furniture company. 

#include <iostream>
#include <string>
using namespace std;
int main()
{
   string itemName = "TV Stand";
   double retailPrice = 325.00;
   double wholesalePrice = 200.00;
		
   // Write your assignment statements here
   double salePrice = retailPrice - (retailPrice * 0.25);
   double profit = retailPrice - wholesalePrice;
   double saleProfit = salePrice - wholesalePrice;   

   cout << "Item Name: " << itemName << endl;
   cout << "Retail Price: $" << retailPrice << endl;
   cout << "Wholesale Price: $" << wholesalePrice << endl;
   cout << "Profit: $" << profit << endl;	
   cout << "Sale Price: $" << salePrice << endl;
   cout << "Sale Profit: $" << saleProfit << endl;
   
   return 0;
}