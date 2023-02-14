// Program to Find the Largest Number Among Three Numbers
#include <stdio.h>

int main() {

  double n1, n2, n3;

  printf("\n Enter three different numbers: ");
  scanf("\n %lf \n %lf \n %lf", &n1, &n2, &n3);

  // if n1 is greater than both n2 and n3, n1 is the largest
  if (n1 >= n2 && n1 >= n3)
    printf("\n %.2f is the largest number. \n", n1);

  // if n2 is greater than both n1 and n3, n2 is the largest
  if (n2 >= n1 && n2 >= n3)
    printf("\n %.2f is the largest number. \n", n2);

  // if n3 is greater than both n1 and n2, n3 is the largest
  if (n3 >= n1 && n3 >= n2)
    printf("\n %.2f is the largest number. \n", n3);

  return 0;
}

