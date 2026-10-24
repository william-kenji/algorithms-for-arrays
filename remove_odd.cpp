#include <iostream>
using namespace std;

/**
    This program removes all odd elements from a partially filled array
*/
int remove_odd(int values[], int size) 
{
   int i = 0;
   int j = 0;
   for(i = 0; i < size; i++)
   {
      if (values[i] % 2 == 0)
      {
         if (i != j)
         {
            values[j] = values[i];
         }
         j++;
      }
   }
   size = j;
   return j;
}

int main()
{
   int a[] = { 22, 98, 95, 46, 31, 53, 82, 24, 11, 19 };
   int size_before = 8;
   int size_after = remove_odd(a, size_before);
   cout << "a: [ ";
   for (int i = 0; i < size_after; i++) 
   {
      cout << a[i] << " ";
   }
   cout << "]" << endl;
   cout << "Expected: [ 22 98 46 82 24 ]\n" << endl;      

   int b[] = { 23, 97, 95, 45, 31, 53, 81, 24, 11, 19 };
   size_before = 7;
   size_after = remove_odd(b, size_before);
   cout << "b: [ ";
   for (int i = 0; i < size_after; i++) 
   {
      cout << b[i] << " ";
   }
   cout << "]" << endl;
   cout << "Expected: [ ]" << endl;      

   return 0;
}
