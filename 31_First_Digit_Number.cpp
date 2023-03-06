/* C program to find first digit of a number  */

#include <stdio.h>

int main()
{
    int n, first;

    /* Input number from user */
    printf("\n Enter any number: ");
    scanf("%d", &n);

    first = n;         // n= 125

    /* Remove last digit from number till only one digit is left */
    while(first >= 10)
    {
        first = first / 10;   // 125/10= 12  first= 12/10= 1
    }

    printf("\n First digit = %d", first);

    return 0;
}
