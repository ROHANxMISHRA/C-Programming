//Program to Find the Size of Variables
#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("\n Size of int: %zu bytes\n", sizeof(intType));
    printf("\n Size of float: %zu bytes\n", sizeof(floatType));
    printf("\n Size of double: %zu bytes\n", sizeof(doubleType));
    printf("\n Size of char: %zu byte\n", sizeof(charType));
    
    return 0;
}
