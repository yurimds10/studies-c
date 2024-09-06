#include <stdio.h>
#include <string.h>

int main() {

  char name[25]; // allocate to 25 bytes
  int age;

  printf("\nWhat's your name? ");
  //scanf("%s", &name);
  fgets(name, 25, stdin); // name of variable, size, library
  name[strlen(name)-1] = '\0'; // fix new line character

  printf("\nHow old are you? ", name);
  scanf("%d", &age);

  printf("Hello %s, how are you?\n", name);
  printf("You are %d years old!\n", age);

  return 0;
}
