#include <stdio.h>
#include <stdlib.h>

void main() {

    int p1,p2,p3;
    float n1, n2, n3, mp;

    printf("Digite a primeira nota:\n");
    scanf("%.1f",&n1);

    printf("Digite a segunda nota:\n");
    scanf("%.1f",&n2);

    printf("Digite a terceira nota:\n");
    scanf("%.1f",&n3);
    
    p1 = 2;
    p2 = 3;
    p3 = 5;

    mp = ((n1 * p1) + (n2 * p2) + (n3 *p3)) / p1 + p2 + p3 

    printf("media final do aluno: %.1f", mp);

}