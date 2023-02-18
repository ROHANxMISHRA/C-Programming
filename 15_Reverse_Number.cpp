// Reverse an Integer
#include <stdio.h>

int main() {

  int n, reverse = 0, remainder;

  printf("\n Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;         // n= 12  Remainder=2,n=1 remainder= 1  
    reverse = reverse * 10 + remainder;   // Reverse= 2
    n /= 10;  // n= n/10
  }

  printf("\n Reversed number = %d \n", reverse);

  return 0;
}
