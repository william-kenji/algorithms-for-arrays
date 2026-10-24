#include <iostream>
using namespace std;

// This is a function, not main() itself!
int all_matches(int values[], int size, int matches[], int a, int b)
{
  int count = 0;
  for (int k = 0; k < size; k++)
  {
    int v = values[k];
    matches [count] = v;
    if (a <= v && v <= b)
    {
      count++;
    }
  }
  return count;
}
