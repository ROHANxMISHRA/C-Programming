// Linear search program in C

#include <stdio.h>
int main()
{
    int a[10], i, item,n;
    printf("\n Enter number of elements of an array:\n");
    scanf("%d",&n);
    printf("\n Enter elements: \n");
    
	for (i=0; i<n; i++)
        scanf("%d", &a[i]);
        
    printf("\n Enter item to search: ");
    scanf("%d", &item);
    
	for (i=0; i<=9; i++)
        if (item == a[i])     // item= a[5]= 11=11
        {
            printf("\n Item found at location %d", i+1);
            break;
        }
    
	if (i > 9)
        printf("\n Item does not exist.");
    return 0;
}




/*
#include <stdio.h>
int main()
{
  int array[100], search, c, n;

  printf("\n Enter number of elements in array \n");
  scanf("\t %d", &n);

  printf("\n Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++)
    scanf("\t %d", &array[c]);

  printf("\n Enter a number to search\n");
  scanf("\t %d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found 
    {
      printf("\n %d is present at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("\n %d isn't present in the array.\n", search);

  return 0;
}      */
