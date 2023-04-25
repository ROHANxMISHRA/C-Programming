#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Error: Factorial of negative number is not defined.\n");
        return 1;
    }
    printf("Factorial of %d is %d.\n", n, factorial(n));
    return 0;
}

