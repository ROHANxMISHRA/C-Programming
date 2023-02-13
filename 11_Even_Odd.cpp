// Program to Check Even or Odd
#include <stdio.h>
int main() {
    int num;
    printf("\n Enter an integer: ");
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)        // == Comparision, = assignment
        printf("\n %d is even. \n", num);
    else
        printf("\n %d is odd. \n", num);
    
    return 0;
}
