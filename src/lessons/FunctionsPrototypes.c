#include <stdio.h>

void hello(char name[], int age); // function prototype

int main() {
  // Function prototype
  //
  // WHAT IS IT?
  //  Function declaration, w/o a body, before main()
  //  Ensures that calls to a function are made with the correct argument's
  //
  // IMPORTANT NOTES
  //  Many C compilers do not check for parameter matching
  //  Missing arguments will result in unexpected behavior
  //  A function prototype causes the compiler to flag an error if arguments are missing
  char name[] = "Yuri";
  int age = 21;

  hello(name, age);
  return 0;
}

void hello(char name[], int age) {
  printf("%s", name);
  printf("%d", age);
}
