// Simple Calculator using switch Statement
#include <stdio.h>

int main() {

  char op;
  double first, second;
  printf("\n Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("\n Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("\n %.1lf + %.1lf = %.1lf \n", first, second, first + second);
      break;
    case '-':
      printf("\n %.1lf - %.1lf = %.1lf \n", first, second, first - second);
      break;
    case '*':
      printf("\n %.1lf * %.1lf = %.1lf \n", first, second, first * second);
      break;
    case '/':
      printf("\n %.1lf / %.1lf = %.1lf \n", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("\n Error! operator is not correct \n");
  }

  return 0;
}

