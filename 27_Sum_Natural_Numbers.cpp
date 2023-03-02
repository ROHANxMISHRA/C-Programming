/* C program to find sum of natural numbers between 1 to n */

#include <stdio.h>

int main()
{
    int i, n, sum=0;

    /* Input upper limit from user */
    printf("\n Enter upper limit: ");
    scanf("%d", &n);

    /* Find sum of all numbers */
    for(i=1; i<=n; i++)
    {
        sum += i;
    }

    printf("\n Sum of first %d natural numbers = %d", n, sum);

    return 0;
}
