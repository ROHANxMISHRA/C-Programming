/** * C program to print all natural numbers from 1 to n using recursion */

#include <stdio.h>


/* Function declaration */
void printNaturalNumbers(int lowerLimit, int upperLimit);



int main()
{
    int lowerLimit, upperLimit;

    /* Input lower and upper limit from user */    
    printf("\n Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("\n Enter upper limit: ");
    scanf("%d", &upperLimit);

    printf("\n All natural numbers from %d to %d are: ", lowerLimit, upperLimit);
    printNaturalNumbers(lowerLimit, upperLimit);     // recursive fn call
    
    return 0;
}


/**
 * Recursively prints all natural number between the given range.
 */
void printNaturalNumbers(int lowerLimit, int upperLimit)
{
    if(lowerLimit > upperLimit)
        return;
    
    printf(" %d, ", lowerLimit);

    // Recursively call the function to print next number
    printNaturalNumbers(lowerLimit + 1, upperLimit);
}
