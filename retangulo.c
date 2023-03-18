#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 void main() {

  float area, base, altura;


  printf("Digite uma base: \n");
  scanf("%.2f", &base);

  printf("Digite uma altura: \n");
  scanf("%.2f", &altura);

  area = (base*altura);

  printf("area do retangulo: %.2f", area);
 }