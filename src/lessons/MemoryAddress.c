#include <stdio.h>

void memoryAddress()
{
  // The memory address is the location of where the variable is stored on the computer.

  int age = 23;
  printf("%p", &age);
}
