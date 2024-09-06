#include <stdio.h>
#include <stdbool.h>

int formatSpecifies() {
  // format specifier % = defines and formats a type of data to be displayed

  // %c = character
  // %s = string (array of characters)
  // %f = float
  // %lf = double
  // %d = integer

  // %.1 = decimal precision
  // %1 = minimum field width
  // %- = left align

  float item1 = 5.75;
  float item2 = 10.00;
  float item3 = 100.99;

  printf("Item 1: $%.1f\n", item1); // $5.80
  printf("Item 2: $%.1f\n", item2); // $10.0
  printf("Item 3: $%.1f\n", item3); // $101.0

  printf("Item 1: $%.2f\n", item1); // $5.75
  printf("Item 2: $%.2f\n", item2); // $10.00
  printf("Item 3: $%.2f\n", item3); // $100.99

  printf("Item 1: $%8.2f\n", item1); // $  5.80
  printf("Item 2: $%8.2f\n", item2); // $ 10.00
  printf("Item 3: $%8.2f\n", item3); // $100.99

  printf("Item 1: $%-8.2f\n", item1); // $5.80
  printf("Item 2: $%-8.2f\n", item2); // $10.00
  printf("Item 3: $%-8.2f\n", item3); // $100.99
  return 0;
}
