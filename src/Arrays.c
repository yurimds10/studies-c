#include <stdio.h>

int main() {
  // array = a data structure that can store many values of the same data type.

  double prices1[] = {5.0, 10.0, 15.0, 20.0};
  double prices2[10] = {5.0, 10.0, 15.0, 20.0, 25.0}; // (10 bytes) array of 5 elements.
  double prices3[5]; // (5 bytes) array of 5 elements.

  prices3[0] = 5.0;
  prices3[1] = 10.0;
  prices3[2] = 15.0;
  prices3[3] = 20.0;
  prices3[4] = 25.0;

  printf("$%.2lf", prices1[1]);
  return 0;
}

