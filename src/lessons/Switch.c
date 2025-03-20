#include <stdio.h>
#include <math.h>

int Switch() {
  // switch = A more efficient alternative to using many "else if" statements
  //          allows a value to be tested for equality against many cases
  int grade;

  printf("\nEnter a letter grade: ");
  scanf("%c", &grade);

  switch (grade) {
    case 'A':
      printf("Perfect!\n");
      break;
    
    case 'B':
      printf("You did good!\n");
      break;
    
    case 'C':
      printf("You did okay!\n");
      break;
    
    case 'D':
      printf("At least it's not an F!\n");
      break;

    case 'F':
      printf("YOU FAILED!\n");
      break;
  }
  return 0;
}