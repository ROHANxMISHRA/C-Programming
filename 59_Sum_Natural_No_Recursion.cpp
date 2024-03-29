/** * C program to find sum of natural numbers from 1 to n using recursion
 */

#include <stdio.h>


/* Function declaration */
int sumOfNaturalNumbers(int start, int end);


int main()
{
    int start, end, sum;
    
    /* Input lower and upper limit from user */
    printf("\n Enter lower limit: ");
    scanf("%d", &start);
    printf("\n Enter upper limit: ");
    scanf("%d", &end);
    
    sum = sumOfNaturalNumbers(start, end);
    
    printf("\n Sum of natural numbers from %d to %d = %d", start, end, sum);
    
    return 0;
}


/**
 * Recursively find the sum of natural number
 */
int sumOfNaturalNumbers(int start, int end)
{
    if(start == end)
        return start;
    else
        return start + sumOfNaturalNumbers(start + 1, end); 
}
