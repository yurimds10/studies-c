#include <stdio.h>

int constants() {
  // constant = fixed value that cannot be altered by the program during its execution

  float pi = 3.14159;
  printf("%f\n", pi);

  pi = 2.234;
  printf("%f\n", pi);

  const float PI = 3.14159;
  printf("%.2f\n", PI);

  // PI = 4.234; // ERROR
  return 0;
}
