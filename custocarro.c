#include <stdio.h>
#include <stdlib.h>

void main(){
 
  float custo1, imposto, percentual, custo2;

  printf("custo de fabrica: \n");
  scanf("%.2f",custo1);

  percentual = (custo1*0.28);

  imposto = (custo1*0.45);

  custo2 = percentual+imposto+custo1;

  printf("Valor do automovel: %.2f", custo2);

}