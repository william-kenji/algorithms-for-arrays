#include <iostream>
using namespace std;

// Needs leap year handling
int main() 
{
   int days_in_month [] { 31 , 28 , 31 , 30 , 31 , 30 , 31 , 30 ,  31 , 30 };

   cout << "Month (1 - 12): " << endl;
   int month; 
   cin >> month;
   cout << "Year: " << endl;
   int year; 
   cin >> year;
   

   // fetches from the array - subtracting 1 so the index matches
   int days = days_in_month[month - 1];

   cout << "Number of days: " << days << endl;
   return 0; 
}
