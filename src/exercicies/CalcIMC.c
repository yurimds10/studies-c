/*
 *
 * Você tem que fazer um programa que calcule o IMC com os seguintes dados: 
 *
 * Imc < 18 
 * Abaixo do peso normal 
 *
 * Imc entre 18 e 25 inclusive 
 * Peso normal 
 *
 * Imc maior que 25 e entre 25 e 30 inclusive 
 * Excesso de peso 
 *
 * Imc maior que 30 e entre 30 e 35 inclusive 
 * Obesidade classe 1 
 *
 * Imc maior que 35 e entre 35 e 40 inclusive 
 * Obesidade classe 2 
 *
 * Imc maior que 40
 * Obesidade classe 3
 *
 * IMC = peso(kg) / altura²(m)
 *
 * */

#include <stdio.h>
#include <math.h>

void calcIMC(double weight, double height) {
  double IMC = weight / pow(height, 2);

  printf("Seu IMC é de: %.2lf\n", IMC);

  if(IMC < 18) {
    printf("Resultado: Abaixo do peso normal!\n");
  
  } else if(IMC >= 18 && IMC <= 25) {
    printf("Resultado: Peso normal!\n");

  } else if(IMC > 25 && IMC <= 30) {
    printf("Resultado: Excesso de peso!\n");

  } else if(IMC > 30 && IMC <= 35) {
    printf("Resultado: Obesidade grau 1\n");

  } else if (IMC > 35 && IMC <= 40) {
    printf("Resultado: Obesidade grau 2\n");
  
  } else {
    printf("Resultado: Obesidade grau 3\n");
  }
}
