#include <stdio.h>

int arithmeticOperators() {
  // Arithmetic operators
  
  // +  (addition)
  // -  (subtraction)
  // *  (multiplication)
  // /  (division)
  // %  (modulus)
  // ++ (increment)
  // -- (decrement)
  
  int x = 5;
  int y = 2;

  int sum = x + y;    // 7
  int sub = x - y;    // 3
  int mult = x * y;   // 10
  int div1 = x / y;   // 2
  float div2 = x / y; // 2.5
  float div3 = x / (float) y;

  printf("%d\n", sum);
  printf("%d\n", sub);
  printf("%d\n", mult);
  printf("%d\n", div1);
  printf("%f\n", div2);
  printf("%.2f\n", div3);

  x++;
  y--;

  printf("%d\n", x); // 6
  printf("%d\n", y); // 1
  return 0;
}
