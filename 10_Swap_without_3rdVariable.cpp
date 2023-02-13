// Swap Numbers Without Using Temporary Variables

#include <stdio.h>
int main() {
  double a, b;
  printf("\n Enter a: ");
  scanf("%lf", &a);
  printf("\n Enter b: ");
  scanf("%lf", &b);

// a=b;  // a= 8
//b=a;  // b= 8

// a,b= b,a;

  // swapping

  // a = (initial_a - initial_b)
  a = a - b;   

  // b = (initial_a - initial_b) + initial_b = initial_a
  b = a + b;

  // a = initial_a - (initial_a - initial_b) = initial_b
  a = b - a;

  // %.2lf displays numbers up to 2 decimal places
  printf("\n After swapping, a = %.2lf \n", a);
  printf("\n After swapping, b = %.2lf \n", b);

  return 0;
}
