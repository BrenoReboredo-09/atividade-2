#include <stdio.h>
 
 void main(){
 
  float salario, reajuste, salario2;

  printf("Digite o sálario atual: \n");
  scanf("%.3f", &salario);

  printf("Digite o Reajuste: \n");
  scanf("%.3f", &reajuste);

  salario2 = (salario*reajuste/100);
  printf("novo salário: %.3f", salario2+salario, "%");

 }
