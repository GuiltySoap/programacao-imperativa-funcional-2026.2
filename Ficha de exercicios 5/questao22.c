#include <stdio.h>
#include "areas.h"

int main(void) {
    double raio, baseRet, altRet, baseTri, altTri;

    printf("Digite o raio do circulo: ");
    if (scanf("%lf", &raio) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Digite a base e a altura do retangulo: ");
    if (scanf("%lf %lf", &baseRet, &altRet) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Digite a base e a altura do triangulo: ");
    if (scanf("%lf %lf", &baseTri, &altTri) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("\nAreas calculadas:\n");
    printf("Circulo: %.2f\n", A_CIRC(raio));
    printf("Retangulo: %.2f\n", A_RET(baseRet, altRet));
    printf("Triangulo: %.2f\n", A_TRI(baseTri, altTri));

    return 0;
}
