#include <stdio.h>
#include <ctype.h>

int CalculatorProgram() {
  char operation;
  float num1, num2, result;

  printf("Choose symbol for the operation:\n");
  printf("\n");

  printf("(+) Addition\n");
  printf("(-) Subtraction\n");
  printf("(*) Multiplication\n");
  printf("(/) Division\n");

  printf("\nOperation: ");
  scanf("%c", &operation);

  switch (operation) {
    case '+':
      printf("\nEnter the first number: ");
      scanf("%f", &num1);

      printf("\nEnter the second number: ");
      scanf("%f", &num2);

      result = num1 + num2;

      printf("The result of addition between %.2f and %.2f is: %.2f\n", num1, num2, result);
      break;

    case '-':
      printf("\nEnter the first number: ");
      scanf("%f", &num1);

      printf("\nEnter the second number: ");
      scanf("%f", &num2);

      result = num1 - num2;

      printf("\nThe result of subtraction between %.2f and %.2f is: %.2f\n", num1, num2, result);
      break;

    case '*':
      printf("\nEnter the first number: ");
      scanf("%f", &num1);

      printf("\nEnter the second number: ");
      scanf("%f", &num2);

      result = num1 * num2;

      printf("\nThe result of multiplication between %.2f and %.2f is: %.2f\n", num1, num2, result);
      break;

    case '/':
      printf("\nEnter the first number: ");
      scanf("%f", &num1);

      printf("\nEnter the second number: ");
      scanf("%f", &num2);

      if(num2 == 0) {
        printf("IT'S IMPOSSIBLE TO DIVIDE BY ZERO!!!\n");
        break;
      }

      result = num1 / num2;

      printf("\nThe result of division between %.2f and %.2f is: %.2f\n", num1, num2, result);
      break;

    default:
      printf("\nError: operation not recognized. Enter the valid operation!\n");
      break;
  }
  return 0;
}
