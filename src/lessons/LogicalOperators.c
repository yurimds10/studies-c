#include <stdio.h>
#include <stdbool.h>

int main() {
  // Logical operators = && (AND) checks if two conditions are true
  // Logical operators = || (OR) checks if at least one condition is true
  // Logical operators = ! (NOT) reverses the state of a condition
  
  bool sunny = false;

  if(!sunny) {
    printf("\nIt's cloudy outside!");

  } else {
    printf("\nIt's sunny outside!");
  }

  return 0;
}
