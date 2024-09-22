#include <stdio.h>
#include <string.h>

int arrayOfStrings()
{
  char cars[][10] = {
    "Eclipse GT",
    "Supra",
    "NSX",
    "Viper GTS"
  };

  //cars[0] = "Tesla";
  strcpy(cars[0], "Tesla");

  for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
  {
    printf("%s\n", cars[i]);
  }
  return 0;
}
