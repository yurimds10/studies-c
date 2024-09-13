#include <stdio.h>
#include <stdbool.h>

int findMax(int x, int y) {
  /*
   *  normal if/else
    if(x > y) {
      return x;

    } else {
      return y;
    }
  */

  // Ternary Operator
  return (x > y) ? x : y; 
}

int main() {
  // Ternary Operator = shortcut to if/else when assigning/returning a value
  // (condition) ? value if true : value if false
  
  int max = findMax(3, 4);

  printf("%d", max);
  return 0;
}
