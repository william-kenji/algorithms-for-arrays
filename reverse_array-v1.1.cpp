#include <string> // not <iostream> for this function
using namespace std;
// reverses the elements in an array: a temporary string called "value" stores the element being reversed
void reverse(string words[], int length)
{
   for (int i = 0; i < length / 2; i++)
   {
      string value = words[i];
      words [i] = words[length - 1 - i];
      words [length - 1 - i] = value;
   }
}
