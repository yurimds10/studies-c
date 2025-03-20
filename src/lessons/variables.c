#include <stdio.h>

int returnVariables() {
  /*
  Variable = Allocated space in memory to store a value.
             We refer to a variable's name to access the stored value.
             That variable now behaves as if it was the value it contains.
             BUT we need to declare what type of data we are storing.
  */
  int x;       // declaration
  x = 123;     // initialization
  int y = 321; // declaration + initialization

  int age = 23;         // integer
  float gpa = 2.05;     // floating point number
  char grade = 'C';     // single character
  char name[] = "Yuri"; // array of characters

  printf("You are 23 years old\n");     // hard code
  printf("You are %d years old\n",age); // using variables

  printf("Your gpa is: %f\n", gpa);

  printf("Your averge grade is %c\n", grade);
  printf("Your name is: %s\n", name);

  printf("My name is %s and I'm %d years old!\n", name, age); // using two variables
  return 0;
}