#include <stdio.h>

void printArrayWithoutLoop(double prices[]) {

  // without loop
  printf("$%.2lf\n", prices[0]);
  printf("$%.2lf\n", prices[1]);
  printf("$%.2lf\n", prices[2]);
  printf("$%.2lf\n", prices[3]);
  printf("$%.2lf\n", prices[4]);
}

void printArrayWithLoop(double prices[]) {

  // with for loop
  for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) {
    printf("$%.2lf\n", prices[i]);
  }
}

// int main() {
//   int num1 = 10;

//   double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0, 30.0};

//   printArrayWithoutLoop(prices);
//   printArrayWithLoop(prices);

//   return 0;
// }