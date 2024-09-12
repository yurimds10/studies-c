#include <stdio.h>
#include <stdbool.h>

// return = returns a value back to a calling function

void printBirthday(char name[], int age) {
  printf("\nHappy birthday dear %s!", name);
  printf("\nYou are %d years old!", age);
}

double square(double x) {
  return x * x;
}

int main() {
  //char name[] = "Yuri";
  //int age = 23;

  //printBirthday(name, age);

  double x = square(3.14);
  printf("%lf", x);

  return 0;
}
