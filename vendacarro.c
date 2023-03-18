#include<stdio.h>

void main(){
    float carros,vendas,salario1,salario2;

    printf("Quantos carros o vendedor vendeu:\n");
    scanf("%f",&carros);

    printf("Digite o valor total das vendas:\n");
    scanf("%f",&vendas);

    printf("Digite o valor fixo do salario do funcionario:\n");
    scanf("%f",&salario1);

    salario2 = salario1+(vendas*5/100);
    printf("O salario total e %3.f\n",salario2);

}