int skip_copy(int dest[], int dest_max, int source[], int source_len)
{
   int count = 0;
   for (int i = 0; i < source_len; i += 2)
   {
      if (count < dest_max)
      {
         dest[count] = source[i];
         count++;
      }
   }


   return count;
}
// This is just a function to be included within a larger program
