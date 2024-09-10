#include <stdio.h>
#include <math.h>

int math() {
  double A = sqrt(9);    // 3
  double B = pow(10, 2); // 100
  int C = round(3.14);   // 3
  int D = ceil(3.14);    // 4
  int E = floor(3.99);   // 3
  double F = fabs(-100); // +100
  double G = log(3);     // 1.09
  double H = sin(45);
  double I = cos(45);
  double J = tan(45);

  printf("\n%lf", A);
}
