//Program to Compute Quotient and Remainder

#include <stdio.h>
int main() {
    int dividend, divisor, quotient, remainder;
    printf("\n Enter dividend: ");
    scanf("%d", &dividend);
    printf("\n Enter divisor: ");
    scanf("%d", &divisor);

    // Computes quotient
    quotient = dividend / divisor;

    // Computes remainder
    remainder = dividend % divisor;

    printf("\n Quotient = %d\n", quotient);
    printf("\n Remainder = %d \n", remainder);
    return 0;
}
