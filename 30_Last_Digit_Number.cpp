/* C program to find last digit of a number */

#include <stdio.h>

int main()
{
    int n, lastDigit;

    /* Input number from user */
    printf("\n Enter any number: ");
    scanf("%d", &n);

    /* Get the last digit */
    lastDigit = n % 10;             // n=39, lastdigit= 39 % 10

    printf("\n Last digit = %d", lastDigit);

    return 0;
}
