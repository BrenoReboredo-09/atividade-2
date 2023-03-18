#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {

    float pi=3.14, r, area;

    printf("digite o valor do raio:\n");
    scanf("%f", &r);

    area = pi * pow(r,2);

    printf("area= %f", area);
}