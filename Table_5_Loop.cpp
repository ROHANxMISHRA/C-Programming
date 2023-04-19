// Print Table of 5 using Loop

#include<stdio.h>

int main()
{ int i, num;
	printf("\n Enter number to print Table: ");
	scanf(" %d ", & num);
	
	for(i=1; i<=10; i++)
	{
	 printf("%d * %d = %d \n", num, i, (num*i));
	}
	return 0;
}
