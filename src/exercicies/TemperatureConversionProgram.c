#include <stdio.h>
#include <ctype.h>

void temperatureConversion() {
  char unit;
  float temperature;

  printf("\nIs the temperature in (F) or (C) or (K)?: ");
  scanf("%c", &unit);

  unit = toupper(unit);

  switch (unit) {
  case 'C':
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temperature);
    temperature = (temperature * 9 / 5) + 32;
    printf("\nThe temperature in Fahrenheit is: %.1f", temperature);
    break;

  case 'F':
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &temperature);
    temperature = ((temperature - 32) * 5) / 9;
    printf("\nThe temperature in Celsius is: %.1f", temperature);
    break;
  
  default:
    printf("\n %c is not a valid unit of measurement", unit);
    break;
  }
}
