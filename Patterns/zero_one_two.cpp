#include <iostream>
using namespace std;

void print_array(int a[], int size);

int main()
{
   const int SIZE = 18;
   int a[SIZE];

   int c = 0;
   for (int i = 0; i < SIZE; i++)
   {
      a[i] = c;
      c++;
      if (c == 3)
         c = 0;
   }
 
   print_array(a, SIZE);

   return 0;
}

/**
   Prints an array of comma separated int.
*/
void print_array(int a[], int size)
{
   cout << "[";
   if (size > 0)
   {
      cout << a[0];
      for (int i = 1; i < size; i++)
      {
         cout << ", " << a[i];
      }
   }
   cout << "]" << endl;
}
