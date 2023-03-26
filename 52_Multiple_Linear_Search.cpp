// Linear search C program for multiple occurrences
#include <stdio.h>
 
int main()
{
   int array[100], search1,search2, c, n, count = 0;
   
   printf("\n Enter number of elements in array\n");
   scanf("%d", &n);
   
   printf("\n Enter %d numbers\n", n);
   
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
     
   printf("\n Enter a number to search\n");
   scanf("%d", &search1);
   
   for (c = 0; c < n; c++) {
      if (array[c] == search) {
         printf("\n %d is present at location %d.\n", search, c+1);
         count++;
      }
   }
   if (count == 0)
      printf("\n %d isn't present in the array.\n", search);
   else
      printf("\n %d is present %d times in the array.\n", search, count);
     
   return 0;
}
