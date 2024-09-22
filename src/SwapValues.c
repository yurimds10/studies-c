#include <stdio.h>
#include <string.h>

int swapValues()
{
  char x[15] = "water";
  char y[15] = "soda";
  char temp[15];

  //temp = x; // X
  //x = y;    // Y
  //y = temp; // X
  
  strcpy(temp, x);
  strcpy(x, y);
  strcpy(y, temp);

  printf("x = %s\n", x);
  printf("y = %s\n", y);

  return 0;
}
