// Check Positive or Negative Using Nested if...else
#include <stdio.h>
int main() {
    double num;
    printf("\n Enter a number: ");
    scanf("%lf", &num);
    if (num <= 0.0) 
	{
        if (num == 0.0)
            printf("\n You entered 0. \n");
        else
            printf("\n You entered a negative number. \n");
    } 
    else
        printf("\n You entered a positive number. \n");
    return 0;
}

