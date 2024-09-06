#include <stdio.h>

int AurgmentedAssignmentOperator() {
  // augmented assignment operators = used to replace a statement where
  //                                  an operator takes a variable as one
  //                                  of its arguments and then assigns
  //                                  the results back to the same variable
  //                                  x = x + 1
  //                                  x+=1

  int x = 10;

  //x = x + 2; // 12
  //x+=2;      // 12

  //x = x - 2; // 8
  //x-=2;      // 8

  //x = x * 2; // 20
  //x*=2;      // 20

  //x = x / 2; // 5
  //x/=2;      // 5
  
  x = x % 2;
  x%=2;

  printf("%d\n", x);

  return 0;
}
