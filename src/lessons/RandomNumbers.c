#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumbersLesson()
{
  // pseudo ramdom numbers = A set of values or elements that are statistically random
  //                         (Don't use these for any sort of cryptographic security)

  srand(time(0));

  int number1 = (rand() % 20) + 1;
  int number2 = (rand() % 20) + 1;
  int number3 = (rand() % 20) + 1;
  
  printf("%d\n", number1);
  printf("%d\n", number2);
  printf("%d\n", number3);

  return 0;
}

