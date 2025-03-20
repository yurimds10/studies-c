#include <stdio.h>

/*
 * Deseja-se um programa que calcule o bônus do salário de um empregado conforme os anos na empresa.
 * Se tem cinco anos ou mais, o bônus é de 20%; se tem menos do que cinco anos, o bônus é de 10 %. 
 * */

void calcSalary(int time, float salary) {
  double bonus, result;

  if(time >= 5) {
    bonus = 20.0 / 100.0; // 0.2
  } else {
    bonus = 10.0 / 100.0; // 0.1
  }

  bonus = salary * bonus;
  printf("Bonus: %.2lf\n", bonus);

  result = salary + bonus;
  printf("Total: %.2lf\n", result);
}
