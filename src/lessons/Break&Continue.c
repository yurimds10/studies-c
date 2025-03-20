#include <stdio.h>

int main() {
  // continue = skips rest of code & forces the next interation of the loop
  // break = exits a loop/switch

  for (int i = 1; 1 <= 20; i++) {
    if (i == 13) {
      break;
    }
    printf("%d\n", i);
  }
  return 0;
}

