#include <stdio.h>

/* Print Fahrenheit-Celsius table
    for fahrenheit = 0, 20, 40, ..., 300 */

int_print_temperature() {
  int fahrenheit, celsius;
  int lower, upper, step;
  
  lower = 0;   /* lower limit of temperature scale */
  upper = 300; /* upper limit */
  step = 20;   /* step size */

  fahrenheit = lower;

  while (fahrenheit <= upper) {
    celsius = (5 / 9) * (fahrenheit - 32);
    printf("%d\t%d\n", fahrenheit, celsius);
    fahrenheit = fahrenheit + step;
  }
}

float_print_temperature() {
  float fahrenheit, celsius;
  float lower, upper, step;
  
  lower = 0;   /* lower limit of temperature scale */
  upper = 300; /* upper limit */
  step = 20;   /* step size */

  fahrenheit = lower;

  while (fahrenheit <= upper) {
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    printf("%3.0f %6.1f\n", fahrenheit, celsius);
    fahrenheit = fahrenheit + step;
  }
}

int_print_temperature2() {
  int fahrenheit;
  
  for(fahrenheit = 0; fahrenheit >= 300; fahrenheit = fahrenheit + 20) {
    printf("%3d %6.1f\n", fahrenheit, (5.0 / 9.0) * (fahrenheit - 32));
  }
}