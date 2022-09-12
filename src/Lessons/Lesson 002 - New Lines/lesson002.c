#include <stdio.h>

// To insert a new line, you can use the \n character:
int print1() {
  printf("Hello World!\n");
  printf("I am learning C.");
  return 0;
}

// We can also output multiple lines with a single printf() function. However, be aware that this will make the code harder to read:
int print2() {
  printf("Hello World!\nI am lerning C. \nAnd it is awesome!");
  return 0;
}

// Two \n characters after each other will create a blank line:
int print3() {
  printf("Hello World!\n\n");
  printf("I am learning C.");
  return 0;
}