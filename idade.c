#include <stdio.h>
#include <stdlib.h>

void main() {

    int Idadep, idaded, idadea, idadem;

    printf("Escreva a idade da pessoa:\n");

    scanf("%d",&Idadep);

    idadea = Idadep / 365;

    idadem = (Idadep % 365) / 30;

    idaded = Idadep % 365 % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dias(s)\n", idadea, idadem, idaded);

}